#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    myClass obj1("Olio 1");
    myClass obj2("Olio 2");

    obj1.connect(&obj1,SIGNAL(finished()),
                 &a,SLOT(quit()),Qt::QueuedConnection);

    obj1.start();
    obj2.start();

    short returnValue;
    returnValue = a.exec();

    obj1.exit();
    obj1.wait();

    obj2.exit();
    obj2.wait();

    return returnValue;
}
