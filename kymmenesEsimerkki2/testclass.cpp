#include "testclass.h"

testClass::testClass()
{
    pWorker1 = new Worker("FirstWorker");
    pWorker2 = new Worker("SecondWorker");

    connect(this,SIGNAL(msgToThread1(QString)),
            pWorker1,SLOT(messageReceived(QString)));

    connect(pWorker1,SIGNAL(messageHandled(QString)),
            pWorker2,SLOT(messageReceived(QString)));

    connect(pWorker2,SIGNAL(messageHandled(QString)),
            this,SLOT(msgReceived(QString)));

   pWorker1->moveToThread(&thread1);
   pWorker2->moveToThread(&thread2);

   thread2.start();  // Let's start this first as thread 1 sends soon msg
   thread1.start()m;

  // emit msgToThread1("msg from testClass to thread 1");

}

testClass::~testClass()
{
    thread1.quit();
    thread2.quit();
    thread1.wait();
    thread2.wait();
    delete pWorker1;
    delete pWorker2;
}

void testClass::sendSignal(QString s)
{
    emit msgToThread1(s);
}

void testClass::msgReceived(QString msg)
{
    qDebug()<<"Got signal from thread 2 that executes worker 2";
    qDebug()<<"And the message = "<<msg;
    emit finishProgram();
}
