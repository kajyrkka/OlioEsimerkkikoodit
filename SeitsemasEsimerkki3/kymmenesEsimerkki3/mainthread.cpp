#include "mainthread.h"

MainThread::MainThread()
{
    worker.moveToThread(&thread);
    connect(this,SIGNAL(startWorker()),
            &worker,SLOT(WorkerFunction()));
}

void MainThread::startThread()
{
    thread.start();
    emit startWorker();

}

void MainThread::mainThreadStart()
{
    short lkm = 0;
    while(lkm<4)
    {
        qDebug()<<"This is MainThreadStart function";
        QThread::sleep(1);
        lkm++;
    }
    thread.quit();
    thread.wait();
    emit finishProgram();

}
