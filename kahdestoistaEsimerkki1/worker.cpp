#include "worker.h"

Worker::Worker()
{

}

void Worker::doWork(short interval)
{
    short int time = 0;
    while(1)
    {
        QThread::msleep(interval);
        time++;
        emit sendTime(time);
    }

}
