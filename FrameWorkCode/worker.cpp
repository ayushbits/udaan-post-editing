#include "worker.h"
#include "DiffView.h"


extern bool gSaveTriggered;
extern bool isVerifier;
extern bool ConvertSlpDevFlag =0;
extern QString mFilename;
extern QString gDirOneLevelUp,gDirTwoLevelUp,gCurrentPageName, gCurrentDirName;
extern map<QString, QString> filestructure_fw;
extern QString s1, s2;
extern std::map<std::string, std::string> CPair_editDis;
extern std::map<string, set<string> > CPairs;
extern map<QString, QString> gInitialTextHtml;
extern QString currentTabPageName;

Worker::Worker(QObject *parent) : QObject(parent)
{

}

void Worker::saveFile(QTextBrowser * curr_browser)
{
        //SaveTimeLog();


        DisplayTimeLog();
        QVector <QString> changedWords;
        //! When changes are made by the verifier the following values are also updated.
        if(isVerifier)
        {
            gSaveTriggered = 1;
            on_viewComments_clicked();
            gSaveTriggered = 0;
            updateAverageAccuracies();
        }
        ConvertSlpDevFlag =1;

        /*
         * If file name is \value untitled on_actionSave_As_triggered is called.
         * Otherwise we will update the changes in the existing saved file.
        */
        if (mFilename=="Untitled")
        {
            on_actionSave_As_triggered();
        }
        else
        {
            QString tempPageName = gCurrentPageName;

            //! Selecting the location where file is to be saved
            QString changefiledir = filestructure_fw[gCurrentDirName];
            QString localFilename = gDirTwoLevelUp + "/" +changefiledir +"/" + tempPageName;

            localFilename.replace(".txt",".html");

            //! Don't create and save new file if output file already exists.
            if (gCurrentDirName == "Inds" || isVerifier && gCurrentDirName == "CorrectorOutput")
            {
                QFileInfo check_file(localFilename);
                if (check_file.exists() && check_file.isFile())
                {
                    emit closeSignal();
                    return ;
                }
            }

            QFile sFile(localFilename);

            QTextCharFormat fmt;
            //fmt.setForeground(QBrush(QColor(0,0,0)));           //Setting foreground brush to render text
            QTextCursor cursor = curr_browser->textCursor();
            cursor.beginEditBlock();
            cursor.select(QTextCursor::Document);
            cursor.mergeCharFormat(fmt);
            cursor.endEditBlock();

            QString output = curr_browser->toHtml();

            QTextDocument doc;
            doc.setHtml( gInitialTextHtml[currentTabPageName] );
            s1 = doc.toPlainText();          //before Saving
            s2 = curr_browser->toPlainText();       //after Saving

            changedWords = editDistance(s1, s2);             // Update CPair by editdistance
            QVectorIterator<QString> i(changedWords);
            while (i.hasNext())
                qDebug() << i.next()<<endl;
            //! Do commit when there are some changes in previous and new html file on the basis of editdistance.
            if(changedWords.size())
            {
                if(mProject.get_version().toInt())     //Check version number
                {
                    QString commit_msg = "Corrector Turned in Version: " + mProject.get_version();
                    //!Check commit condition
                    if(!mProject.commit(commit_msg.toStdString()))
                    {
                        //cout<<"Commit Unsuccessful"<<endl;
                        emit closeSignal();
                        return;
                    }
                    else
                    {
                        mProject.commit(commit_msg.toStdString());
                        //cout<<"Commit Successful"<<endl;
                    }
                }
            }

            //CPair.insert(CPair_editDis.begin(), CPair_editDis.end());
            //! Enters entries in CPairs through CPair_editDis; allows multiple entries for a incorrent word entry
            for(auto elem : CPair_editDis)
            {
               std::cerr << elem.first << " " << elem.second << "\n";
               std::cerr << toslp1(elem.first) << " " << toslp1(elem.second) << "\n";
               //CPair.insert(make_pair(toslp1(elem.first), toslp1(elem.second)));
               if ( CPairs.find(toslp1(elem.first)) != CPairs.end())
               {
                   std::set< std::string>& s_ref = CPairs[toslp1(elem.first)];
                   s_ref.insert(toslp1(elem.second));
               }
               else
               {
                   CPairs[toslp1(elem.first)].insert(toslp1(elem.second));
               }
            }

            //! Reflecting CPairs entries in the file /Dicts/CPair; Making it dynamic
            QString filename12 = mProject.GetDir().absolutePath() + "/Dicts/" + "CPair";
            QFile file12(filename12);
            if(!file12.exists())
            {
               qDebug() << "No exist file "<<filename12;
            }
            else
            {
               qDebug() << filename12<<"exists";
            }

            //! Insert entries in Correct Formatting Hello (/t) hi,(comma)hiii
            if (file12.open(QIODevice::ReadWrite  | QIODevice::Text | QIODevice::Append))
            {
                QTextStream out(&file12);
                out.setCodec("UTF-8");
                map<string, set<string>>::iterator itr;
                set<string>::iterator set_it;

                for (itr = CPairs.begin(); itr != CPairs.end(); ++itr)
                {
                    out <<  QString::fromStdString(toDev(itr->first)) << '\t';
                    for (set_it = itr->second.begin(); set_it != itr->second.end(); ++set_it)
                    {
                        if(set_it != prev(itr->second.end()))
                        {
                            out << QString::fromStdString(toDev(*set_it)) << ",";
                        }
                        else {
                            out << QString::fromStdString(toDev(*set_it));
                        }

                    }
                    out <<"\n";
                }
                 file12.close();
            }

            //! If file is in write-only mode
            if(sFile.open(QFile::WriteOnly))
            {
                QTextStream out(&sFile);
                out.setCodec("UTF-8");          //Sets the codec for this stream
                gInitialTextHtml[currentTabPageName] = output;
                output = "<style> body{ width: 21cm; height: 29.7cm; margin: 30mm 45mm 30mm 45mm; } </style>" + output;     //Formatting the output using CSS <style> tag
                out << output;
                sFile.flush();      //Flushes any buffered data waiting to be written in the \a sFile
                sFile.close();      //Closing the file
            }

            //! Converting html output into plain text.
            QTextDocumentFragment qtextdocfragment;
            QString plain = qtextdocfragment.fromHtml(output).toPlainText();

            std::stringstream ss(plain.toStdString());
            std::string to;
            //! Appending the plain text in QVector<QString> object.
            QVector<QString> s;
            if (plain != NULL)
            {
                while(std::getline(ss,to,'\n'))
                {
                    QString qstr = QString::fromStdString(to);
                    s.append(qstr);
                }
            }

            //! Inserting string values in \a qjsonobj.
            QJsonObject qjsonobj;
            for(int i = 0;i < s.size(); i++)
            {
                QString z = QString::number(i);
                qjsonobj.insert(z, QJsonValue(s[i]));
            }
            int len = qjsonobj.length();

            localFilename.replace(".html",".json");         //Replacing extension of file from .html to .json
            QFile sFile2(localFilename);

            //! Sets codec value and then adding values in file
            if(sFile2.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QTextStream out(&sFile2);
                out.setCodec("UTF-8");
                out << "{\n";
                for(int x = 0; x<len; x++)
                {
                    QString z = QString::number(x);
                    out << "\"" << x << "\"" << ":" << "\"" << qjsonobj[z].toString() << "\"" <<","<< '\n';
                }
                out << "}";

                sFile2.flush();
                sFile2.close();
            }

            //! Set Inds file readonly after saving - Corrector mode
            if (!isVerifier && gCurrentDirName == "Inds")
            {
                if(QFile::exists(localFilename))
                {
                    curr_browser->setReadOnly(true);
                }

            }

            //! Set Inds and CorrectorOutput files readonly after generating output file - Verifier mode
            if (isVerifier && (gCurrentDirName == "Inds" || gCurrentDirName == "CorrectorOutput"))
            {
                if(QFile::exists(localFilename))
                {
                    QString Inds_file = gCurrentPageName;
                    Inds_file.replace(".html", ".txt");
                    QString Corr_file = Inds_file;
                    Corr_file.replace(".txt", ".html");
                    for (int i = 0; i < mainWinUi->tabWidget_2->count(); i++)
                    {
                        QString tab_name = mainWinUi->tabWidget_2->tabText(i);
                        if (tab_name == Inds_file || tab_name == Corr_file)
                        {
                            auto b = (QTextBrowser*)mainWinUi->tabWidget_2->widget(i);
                            b->setReadOnly(true);
                        }
                    }
                }
            }
        }

        emit closeSignal();
}
