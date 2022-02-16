#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QObject>
#include <QDebug>
#include "worker.h"
#include <QThread>

class testClass : public QObject
{
    Q_OBJECT
private:
    Worker * pWorker1;
    Worker * pWorker2;

    QThread thread1;
    QThread thread2;

public:
    testClass();
    ~testClass();
    void sendSignal(QString s);

signals:
    void msgToThread1(QString);
    void finishProgram();
    void testSignal(QString);
public slots:
    void msgReceived(QString);
};

#endif // TESTCLASS_H
