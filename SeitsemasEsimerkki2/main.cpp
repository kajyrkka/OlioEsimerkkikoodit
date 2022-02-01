#include <iostream>
using namespace std;
#include "child.h"

int main()
{
    Child obj;
    obj.setBase(2);
    obj.setHeight(2);
    cout << obj.Parent::calculateArea()<<endl;
    cout << obj.calculateArea()<<endl;

    return 0;
}
