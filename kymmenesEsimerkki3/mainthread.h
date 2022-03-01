#ifndef MAINTHREAD_H
#define MAINTHREAD_H
#include <QThread>
#include <QDebug>
#include "worker.h"
#include <QObject>


class MainThread:public QObject
{
    Q_OBJECT
private:
    QThread thread;
    Worker worker;
public:
    MainThread();
    void startThread();
    void mainThreadStart();
signals:
    void startWorker();
    void finishProgram();

};

#endif // MAINTHREAD_H
