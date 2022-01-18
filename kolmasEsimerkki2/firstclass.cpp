#include "firstclass.h"

firstClass::firstClass()
{
    var1 = 1;
    var2 = 2;
    cout << "luokan muodostimessa ollaan = "<<endl;
}

firstClass::~firstClass()
{
    cout << "luokan tuhoajassa ollaan. = "<<endl;
}

short firstClass::calculateSum()
{
    result = var1 + var2;
    printResult(result);
    return result;
}



void firstClass::printResult(short res)
{
    cout << "Laskennan tulos oliolla = "<<res<<endl;
}

void firstClass::test()
{
    cout << "Now in protected test function= "<<endl;
}
