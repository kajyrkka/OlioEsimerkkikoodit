#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QThread>
#include <QDebug>

class Worker:public QObject
{
    Q_OBJECT
private:
    QString nameOfWorker;
    QString message;
public:
    Worker(QString);
signals:
    void messageHandled(QString);
public slots:
    void messageReceived(QString);
};

#endif // WORKER_H
