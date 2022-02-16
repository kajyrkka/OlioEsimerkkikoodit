#include "worker.h"


Worker::Worker(QString name)
{
    nameOfWorker = name;
    qDebug()<<"Created Worker with name"<< name;
}

void Worker::messageReceived(QString msg)
{
    qDebug()<<"And now in Worker";
    message = msg;
    QThread::sleep(1);
    qDebug()<<"And now in Worker 1 second passed";
    emit messageHandled(nameOfWorker+message);
}
