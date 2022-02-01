#ifndef PARENT_H
#define PARENT_H
#include <iostream>
using namespace std;

class Parent
{
public:
    Parent();
    virtual ~Parent();
    virtual void f1();
    virtual void f2();
};

#endif // PARENT_H
