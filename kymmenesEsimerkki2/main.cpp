#include <QCoreApplication>
#include <QObject>
#include "testclass.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    testClass t;

    QObject::connect(&t,SIGNAL(finishProgram()),
                     &a,SLOT(quit()),Qt::QueuedConnection);

    t.sendSignal("messageFromMain");


    short returnValue = a.exec();

    qDebug()<<"Exiting from program";

    return returnValue;
}
