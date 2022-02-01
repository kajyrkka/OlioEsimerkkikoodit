#ifndef PARENT_H
#define PARENT_H
#include <iostream>
using namespace std;

class Parent
{
public:
    Parent();
    virtual ~Parent();
    void setBase(double);
    void setHeight(double);
    virtual double calculateArea();
private:
    double PII = 3.14;
    double area;
    double base,heigth;
};

#endif // PARENT_H
