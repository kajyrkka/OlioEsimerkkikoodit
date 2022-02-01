#include "scientific.h"

Scientific::Scientific()
{
   cout<<"Now in Scientific constructor!"<<endl;
}

Scientific::~Scientific()
{
   cout<<"Now in Scientific destructor!"<<endl;
}

double Scientific::Ssqrt(double a)
{
    this->printProtected();
    this->protectedVariable = 100;
    return sqrt(protectedVariable+a);
}

void Scientific::Scientific_protected()
{

}

void Scientific::Scientific_private()
{

}


