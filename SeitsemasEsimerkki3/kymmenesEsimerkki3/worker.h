#ifndef WORKER_H
#define WORKER_H
#include <QObject>
#include <QDebug>
#include <QThread>

class Worker:public QObject
{
    Q_OBJECT
public:
    Worker();

signals:
    void WorkerFunctionDone();

public slots:
    void WorkerFunction();
};

#endif // WORKER_H
