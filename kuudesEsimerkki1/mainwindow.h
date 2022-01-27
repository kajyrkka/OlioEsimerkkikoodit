#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
using namespace std;
#include "interface.h"

class MainWindow
{
public:
    MainWindow();
    ~MainWindow();
    void printCardNumber();
    string readCard();

private:
    string cardnumber="";
    string pin = "";
    int numberOfTrials = 0;
    Interface * pInterface;
};

#endif // MAINWINDOW_H
