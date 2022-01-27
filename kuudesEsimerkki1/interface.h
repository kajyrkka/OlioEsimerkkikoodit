#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
using namespace std;
#include "engine.h"

class Interface
{
public:
    Interface();
    ~Interface();
    string getCardNumber();
private:
    Engine * pEngine;
};

#endif // INTERFACE_H
