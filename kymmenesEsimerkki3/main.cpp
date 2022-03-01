#include <QCoreApplication>
#include "mainthread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MainThread m;

    m.connect(&m,SIGNAL(finishProgram()),
              &a,SLOT(quit()),Qt::QueuedConnection);

    m.startThread();
    m.mainThreadStart();

    return a.exec();
}
