#ifndef CHILD_H
#define CHILD_H
#include <iostream>
using namespace std;
#include "parent.h"

class Child:public Parent
{
public:
    Child();
    ~Child();
    virtual double calculateArea() override;

private:
   double side1,side2,result;


};

#endif // CHILD_H
