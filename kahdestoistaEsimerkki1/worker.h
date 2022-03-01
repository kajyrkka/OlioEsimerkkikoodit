#ifndef WORKER_H
#define WORKER_H
#include <QTimer>
#include <QObject>
#include <QThread>

class Worker:public QObject
{
    Q_OBJECT
public:
    Worker();

public slots:
    void doWork(short interval);

signals:
    void sendTime(short);

private:
    QTimer timer;
};

#endif // WORKER_H
