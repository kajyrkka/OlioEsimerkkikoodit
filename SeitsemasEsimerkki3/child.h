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
    virtual void f2() override;
};

#endif // CHILD_H
