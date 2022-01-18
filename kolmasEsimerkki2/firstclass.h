#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H
#include <iostream>
using namespace std;

class firstClass
{
public:
    firstClass();  // konstruktori = muodostin funktio
    ~firstClass(); // destruktori = tuhoaja funktio, jota kutsutaan kun olio tuhotaan
    short calculateSum();


private:
    short var1,var2,result;
    void printResult(short res);

protected:
    void test(void);


};

#endif // FIRSTCLASS_H
