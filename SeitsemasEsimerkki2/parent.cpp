#include "parent.h"

Parent::Parent()
{
   cout<<"Parent constructor!"<<endl;
}

Parent::~Parent()
{
   cout<<"Parent destructor!"<<endl;
}

void Parent::setBase(double a)
{
    base = a;
}

void Parent::setHeight(double a)
{
    heigth = a;
}

double Parent::calculateArea()
{
    return base*base;
}
