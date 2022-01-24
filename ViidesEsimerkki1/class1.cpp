#include "class1.h"

Class1::Class1()
{
    cout<<"Now in Class1 Construktor"<<endl;
}

Class1::~Class1()
{
    cout<<"Now in Class1 Destructor"<<endl;
}

void Class1::useClass2Assosiation(Class2 o)
{
    o.Class2Assosiation();
}

void Class1::useClass2Aggregation(Class2 &o)
{
    o.Class2Aggregation();
    cout<<"And now I could actually kill obj2 as I have a reference to it"<<endl;
}

void Class1::useClass3Composition()
{
    this->obj3.Class3Function();
    obj3.Class3Function();
}

