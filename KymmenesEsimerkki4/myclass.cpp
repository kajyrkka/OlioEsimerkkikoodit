#include "myclass.h"



void myClass::run()
{
    for (short i = 0; i <= 3; i++)
    {
        qDebug() << this->threadName << ":" << i;
        msleep(1000);
    }
}

myClass::myClass(QString name):threadName(name)
{

}
