#include "child.h"

Child::Child()
{
    cout << "Child constructor!" << endl;
}

Child::~Child()
{
    cout << "Child destructor!" << endl;
}

void Child::f2()
{
    cout << "Overwritten function 2!" << endl;
}
