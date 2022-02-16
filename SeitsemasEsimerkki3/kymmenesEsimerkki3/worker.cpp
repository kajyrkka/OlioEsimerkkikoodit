#include "worker.h"

Worker::Worker()
{

}

void Worker::WorkerFunction()
{
    short lkm = 0;
    while(lkm<5)
    {
        qDebug()<<"This is Worker function";
        QThread::sleep(1);
        lkm++;
    }
    emit WorkerFunctionDone();
}
