#include "mainwindow.h"

MainWindow::MainWindow()
{
    cout<<"Now at MainWindow constructor"<<endl;
    pInterface = new Interface;
}

MainWindow::~MainWindow()
{
    cout<<"Now at MainWindow constructor"<<endl;
    delete pInterface;
    pInterface = nullptr;
}

void MainWindow::printCardNumber()
{
    cout<<"Now at MainWindow printCardNumber function"<<endl;
    cout<<"Card number read from Interface/Engine = " << cardnumber<<endl;
}

string MainWindow::readCard()
{
    cout<<"Now at MainWindow readCard function"<<endl;
    cardnumber = pInterface->getCardNumber();
    return cardnumber;
}
