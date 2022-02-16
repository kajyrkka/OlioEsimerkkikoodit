#include "myclass.h"



void myClass::run()
{
    for (short i = 0; i <= 100; i++)
    {
    qDebug() << this->threadName << ":" << i;
    msleep(1000);
    }
}

myClass::myClass(QString s)
{
    threadName = s;
    this->start();
}
