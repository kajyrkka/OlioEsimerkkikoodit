#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    myClass A("ThreadA");
    myClass B("ThreadB");


    return a.exec();
}
