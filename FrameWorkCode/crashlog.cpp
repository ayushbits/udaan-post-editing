#include "crashlog.h"
#include <QApplication>
#include <QtDebug>
#include <QFile>
#include <QTextStream>
#include <QFileInfo>
#include <QTime>
#include <QDir>
#include <stdio.h>
#include <string>
#include <cstring>

/*!
* \namespace crashlog
* \fn myMessageHanddler
* \brief Checks the type of the QT output message as either debug, info, warning, critical or fatal and accordingly
*        prints it in the console. Additionally it also prints it to the file FramWorkCode/application_log.txt.
*        This function is called using qMessageHandler from different class constructors.
*
* \sa fprintf(), QFile::open(), flush(), close()
*/
namespace crashlog {
void myMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString & msg)
{
       QByteArray localMsg = msg.toLocal8Bit();
       const char *file = context.file ? context.file : "";
       const char *function = context.function ? context.function : "";
       QString output;

       switch (type) {
        case QtDebugMsg:
            fprintf(stderr, "Debug: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
            break;
        case QtInfoMsg:
           fprintf(stderr, "Info: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
            break;
        case QtWarningMsg:
           fprintf(stderr, "Warning: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
           break;
        case QtCriticalMsg:
           fprintf(stderr, "Critical: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
           break;
        case QtFatalMsg:
           fprintf(stderr, "Fatal: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
           break;
         }
       //create / open log file (FrameWorkCode/application_log.txt)
       QFile outFile(QString::fromStdString(qApp->applicationDirPath().toStdString())+"/application_log.txt");
       outFile.open(QIODevice::ReadWrite | QIODevice::Append);
       QTextStream ts1(&outFile);
       //set codec
       ts1.setCodec("UTF-8");
       //output messages onto the file
       QHash<QtMsgType, QString> msgLevelHash({{QtDebugMsg, "Debug:"}, {QtInfoMsg, "Info:"}, {QtWarningMsg, "Warning:"}, {QtCriticalMsg, "Critical:"}, {QtFatalMsg, "Fatal:"}});
       QString logLevelName = msgLevelHash[type];
       QString txt = QString("%1 %2 (%3)").arg(logLevelName, msg,  context.file);

       ts1 << txt << endl;
       outFile.flush();
       outFile.close();
       }
 }

