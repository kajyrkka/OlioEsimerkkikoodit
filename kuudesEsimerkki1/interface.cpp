#include "interface.h"

Interface::Interface()
{
    cout<<"Now at Interface constructor "<<endl;
    pEngine = new Engine;
}

Interface::~Interface()
{
    cout<<"Now at Interface destructor "<<endl;
    delete pEngine;
    pEngine = nullptr;
}

string Interface::getCardNumber()
{
    return pEngine->readSerialPortData();
}
