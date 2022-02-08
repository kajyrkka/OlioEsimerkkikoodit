#include "myclass.h"

myClass::myClass()
{

}

void myClass::f1()
{
    short localVariable = 2;
    qDebug()<<"Value of localVariable = "<< localVariable;

    qDebug("Value of localVarialble = %d",localVariable);
}
