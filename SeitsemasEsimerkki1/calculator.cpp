#include "calculator.h"

Calculator::Calculator()
{
   cout<<"Now in Calculator constructor!"<<endl;
}

Calculator::~Calculator()
{
   cout<<"Now in Calculator destructor!"<<endl;
}

double Calculator::add(double a, double b)
{
    return a+b;
}

double Calculator::sub(double a, double b)
{
    return a-b;
}

double Calculator::mul(double a, double b)
{
    return a*b;
}

double Calculator::div(double a, double b)
{
    return a/b;
}

void Calculator::printProtected()
{
    cout<<"Calculator::printProtected"<<endl;
};

void Calculator::printPrivate()
{
    cout<<"Calculator::printPrivate"<<endl;
}
