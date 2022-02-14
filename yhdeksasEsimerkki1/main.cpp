#include <QCoreApplication>
#include "clock.h"
#include <QObject>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Clock obj;

    obj.connect(&obj,SIGNAL(stopProgram()),
                &a,SLOT(quit()));
    obj.startClock();

    return a.exec();
}
