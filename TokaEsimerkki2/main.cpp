#include <iostream>

using namespace std;

struct Messages{
    string address;
    string message;
    int numberOfmessages;
    Messages * pMessages;
};
Messages * aliohjelma(void);

// MISTÄ MUISTISTA SEURAAVA MUUTTUJAT VARATAAN?

Messages firstMessage;

int main()
{
    // Mitä tässä alla tapahtuu?
    int integerVariable = 1;
    int * pointerVariable = &integerVariable;
    int & referenceVariable = integerVariable;
    cout<<"integerVariable = "<<integerVariable<<endl;
    referenceVariable = *pointerVariable;
    cout<<"integerVariable = "<<integerVariable<<endl;
    referenceVariable = 2;
    cout<<"integerVariable = "<<integerVariable<<endl;




    firstMessage.address = "Kotikatu 1";

    // MISTÄ MUISTISTA NÄMÄ?
    Messages secondMessage;
    secondMessage.address = "Kotikatu 2";

    Messages * ptr = aliohjelma();
    cout << "Let's print firstMessage address = " <<firstMessage.address<< endl;
    cout << "Let's print secondMessage address = " <<secondMessage.address<< endl;
    cout << "Let's print thirdMessage address = " <<ptr->address<< endl;


    return 0;
}

Messages * aliohjelma(void)
{
    // MISTÄ MUISTISTA NÄMÄ MUUTTUJAT VARATAAN?
    Messages * p = new Messages;
    p->address = "Kotikatu 3";
    return p;
}
