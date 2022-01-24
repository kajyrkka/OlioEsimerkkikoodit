#include <iostream>
#include "class1.h"

using namespace std;

int main()
{

    Class1 obj1;
    Class2 obj2;
    Class2 &ref = obj2;
    obj1.useClass2Assosiation(obj2);  // Copy of obj2 is given to obj1 function. This is assosiation

    obj2.Class2Assosiation();         // Let's call obj2 method to prove that obj2 is till alive

    obj1.useClass2Aggregation(obj2);  // This is no more a copy of obj2 but a reference to actual object.
    obj1.useClass2Aggregation(ref);  // This is no more a copy of obj2 but a reference to actual object.

    obj1.useClass3Composition();      // And here obj1 actually creates, uses and deletes Class3 object.


    return 0;
}
