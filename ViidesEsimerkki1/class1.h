#ifndef CLASS1_H
#define CLASS1_H
#include <iostream>
using namespace std;

#include "class2.h"
#include "class3.h"

class Class1
{
public:
    Class1();
    ~Class1();
    void useClass2Assosiation(Class2 o);
    void useClass2Aggregation(Class2& o);
    void useClass3Composition(void);

private:
    Class3 obj3;
};

#endif // CLASS1_H
