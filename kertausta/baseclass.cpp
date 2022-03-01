#include "baseclass.h"

BaseClass::BaseClass()
{
    qDebug()<<"BaseClass constructorissa!";
}

BaseClass::~BaseClass()
{
    qDebug()<<"BaseClass destructorissa!";
}

void BaseClass::setPassword(QString p)
{
    password = p;
    emit passwordSetSignal(password);
}

QString BaseClass::getPassword()
{
    return password;
}

QString BaseClass::guessPassword()
{
    QString returnValue = "BaseClass implementation";
    return returnValue;
}
