#include <iostream>
#include "firstclass.h"
using namespace std;
short calculateSum(short a, short b);
void printResult(short res);

short var1,var2,result;

int main()
{


    firstClass * pfirstClass = new firstClass;

    pfirstClass->calculateSum();

    delete pfirstClass;

    pfirstClass=nullptr;









    var1 = 1;
    var2 = 2;
    result = calculateSum(var1,var2);
    printResult(result);
    return 0;
}

short calculateSum(short a, short b)
{
    return a+b;
}
void printResult(short res)
{
    cout<<"Result is = " << res <<endl;
}

