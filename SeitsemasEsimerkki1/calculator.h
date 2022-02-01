#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
using namespace std;

class Calculator
{
public:
    Calculator();
    ~Calculator();
    double add(double,double);
    double sub(double,double);
    double mul(double,double);
    double div(double,double);
protected:
    void printProtected(void);
    double protectedVariable = 1;

private:
    void printPrivate(void);
    double privateVariable = 2;

};

#endif // CALCULATOR_H
