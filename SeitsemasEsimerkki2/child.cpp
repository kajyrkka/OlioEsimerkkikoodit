#include "child.h"

Child::Child()
{
   cout<<"Child constructor!"<<endl;
}

Child::~Child()
{
   cout<<"Child destructor!"<<endl;
}

double Child::calculateArea()
{
    side1 = 2;
    side2 = 3;
    return side1*side2;
}
