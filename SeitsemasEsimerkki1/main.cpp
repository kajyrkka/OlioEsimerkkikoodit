#include <iostream>
using namespace std;
#include "scientific.h"

int main()
{
    Scientific obj;
    cout << "Calculation result = " << obj.Ssqrt(4)<< endl;
    cout << "Using derived class method = " << obj.add(1,2)<< endl;
    return 0;
}
