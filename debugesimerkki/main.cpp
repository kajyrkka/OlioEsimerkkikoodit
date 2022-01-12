#include <iostream>

/*

Katsotaan tämän koodin avulla kuinka pino toimii aliohjelmaa kutsuttaessa.
- Eli kuinka kutsuvan (pääohjelman) parametrit jäävät muuttumattomina pääohjelmaan
- Ja kuinka välitettävät parametrit välitetään pinon kautta aliohjelmalle
- Ja kuinka aliohjelman varaamat muuttujat edelleen "syövät" pinoa
- Ja mitä tapahtuu 0xffffffff alustetulle pinolle, jos suoritetaan joku cout alkuinen komento

Keskustelua siitä, milloin sitten kannattaa käyttää pinoa ja mikä olisi vaihtoento jos ei käytä pinoa
=> Global RAM, miten tämän testaisi mistä osoitteesta nämä menevät?
=> Keko(Heap)
*/

using namespace std;

int laskeSumma(int, int);

int foo = 5;

int main()
{

    int muuttujaPinosta;
    //cout << "pino osoitin = stack pointer = " << &muuttujaPinosta << endl;

    // Alustetaan pino tunnetulla datalla tästä kohdasta 100 x 4 bytea ylöspäin
    for(int i = 0; i<100 ; i++)
    {
        *( (int32_t*)(&muuttujaPinosta) - i ) = 0xffffffff;
    }

    int foo = 1;
    int bar = 2;
    int paluuarvo = laskeSumma(foo,bar);
    paluuarvo = paluuarvo + 1;
    cout << "summa = " << paluuarvo << endl;
    cout << "int muuttujan koko = "<< sizeof(int) <<endl;


    return 0;
}

int laskeSumma(int a, int b)
{
    int temp1 = a+1;
    int temp2 = b+2;
    int tulos = temp1+temp2;
    return tulos;
}
