#include "mainwindow.h"
#include "myclass.h"
#include <iostream>
using namespace std;

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    myClass b;
    b.f1();
    cout <<"Where this print goes?"<< endl;

    MainWindow w;
    w.show();
    return a.exec();
}
