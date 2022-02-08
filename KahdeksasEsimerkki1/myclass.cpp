#include "myclass.h"

myClass::myClass()
{

}

void myClass::f_qDebug()
{

    short localVariable = 2;
    qDebug()<<"Value of localVariable = "<< localVariable;

    qDebug("Value of localVarialble = %d",localVariable);

}

void myClass::f_QString()
{
    QString str1 = QString();   // Empty QString
    QString str2 = "Second QString";
    str1.append(str2);          // now both have same content
    qDebug()<< str1<<str2;

    QString str3 = "100";       // And how do we change this to short?
    short nbr3 = str3.toShort();
    qDebug()<<"Number 100 as a string = "<< str3;
    qDebug()<<"And number 100 as a short = "<<nbr3;

    QString str4 = QString::number(nbr3);
    qDebug()<< "And we can also change short to QString" << str4;
}

void myClass::f_QList()
{
    QString path = QDir::rootPath() + "temp";
    qDebug()<<"path now = "<< path;
    QDir dir = QDir(path);

    QList<QFileInfo> list;
    QFileInfoList fileInfo = dir.entryInfoList();

    foreach(const QFileInfo info,fileInfo)
    {
       list.append(info);
       qDebug()<<"Name of fileInfo = "<<info<<"and size of it = "<< info.size();
    }
    qDebug()<<"Let's count how many items there are on the list = "<<list.count();


}
