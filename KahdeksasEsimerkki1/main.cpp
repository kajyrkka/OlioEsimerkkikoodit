#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    myClass b;
    b.f_qDebug();
    b.f_QString();
    b.f_QList();

    return a.exec();
}
