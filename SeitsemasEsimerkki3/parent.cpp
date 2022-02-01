#include "parent.h"

Parent::Parent()
{
    cout << "Parent constructor!" << endl;
}

Parent::~Parent()
{
     cout << "Parent destructor!" << endl;
}

void Parent::f1()
{
    cout << "Parent f1 function!" << endl;
}

void Parent::f2()
{
    cout << "Parent f2 function!" << endl;
}
