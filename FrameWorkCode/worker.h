#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include<vector>
#include<map>
#include<QString>
#include<QTextBrowser>
#include<Project.h>
#include<set>
#include<QTextDocumentFragment>
#include<sstream>
#include "slpNPatternDict.h"
#include"mainwindow.h"
#include"ui_mainwindow.h"

class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = nullptr);
    Project & GetProject() {
        return mProject;
    }

public slots:
    void saveFile(QTextBrowser * curr_browser);

signals:
    void finishedSave();
    void closeSignal();

private:
    Project mProject;
    Ui::MainWindow *mainWinUi;


};

#endif // WORKER_H
