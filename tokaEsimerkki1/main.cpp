#include <iostream>

using namespace std;

namespace otherSpace {
    void printYourNamespace(void)
    {
        cout<<"I am in otherSpace thus I can have the same name"<<endl;
    }
}


//using namespace otherSpace;

void printYourNamespace(void)
{
    cout<<"I am within main() Namespace"<<endl;
}




int main()
{
    cout << "Hello World!" << endl;
    printYourNamespace();
    otherSpace::printYourNamespace();
    return 0;
}

