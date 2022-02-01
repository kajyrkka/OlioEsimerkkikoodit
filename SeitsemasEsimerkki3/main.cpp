#include <iostream>
using namespace std;
#include "child.h"

int main()
{
    Child * pChild = new Child;
    pChild->f1();
    pChild->f2();

    delete pChild;
    pChild = nullptr;

    return 0;
}
