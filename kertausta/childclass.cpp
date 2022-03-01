#include "childclass.h"

childClass::childClass()
{
    qDebug()<<"child constructor!!!";
    connect(this,SIGNAL(passwordSetSignal(QString)),
            this,SLOT(receivePassword(QString)));
}

childClass::~childClass()
{
    qDebug()<<"child destructor!!!";
}

QString childClass::guessPassword()
{
    QString returnValue = "ChildClass overwritten implementation";
    return returnValue;
}

void childClass::receivePassword(QString pw)
{
    qDebug()<<"Got signal from BaseClase to ChildClass";
    qDebug()<<"Signal content = "<< pw;
}
