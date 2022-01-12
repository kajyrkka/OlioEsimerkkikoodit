#include <iostream>

using namespace std;
struct oma{
    int luku;
    int * luvunOsoite;
};

oma aliohjelma1(oma);
oma aliOhjelma2(void);
void tulosta(oma);



int main()
{
    cout << "Hello World!" << endl;
    oma tietue;
    // Alustetaan pino tunnetulla datalla tästä kohdasta 100 x 4 bytea ylöspäin
    for(int i = 0; i<100 ; i++)
    {
        *( (int32_t*)(&tietue) - i ) = 0xffffffff;
    }

    tietue.luku = 1;
    tietue.luvunOsoite = &tietue.luku;
    tulosta(tietue);
    tietue = aliohjelma1(tietue);
    tulosta(tietue);

    return 0;
}
oma aliohjelma1(oma o)
{
    oma aliohjelmanTietue;
    aliohjelmanTietue.luku = o.luku + 1;
    aliohjelmanTietue.luvunOsoite = &aliohjelmanTietue.luku;
    tulosta(aliohjelmanTietue);
    aliohjelmanTietue = aliOhjelma2();
    return aliohjelmanTietue;
}
oma aliOhjelma2(void)
{
    oma tietue;
    tietue.luku = 100;
    tietue.luvunOsoite = &tietue.luku;
    tulosta(tietue);
    return tietue;
}
void tulosta(oma t)
{
    cout << "Tietueen luku = " << t.luku << endl;
    cout << "Tietueen luvun osoite = " << t.luvunOsoite << endl;
    printf("Tietueen luvun osoite eli osoite pinossa = %d\r\n",(int) t.luvunOsoite);
    printf("Tietueen koko byteissa on %d\r\n",sizeof(t));
    cout << endl;
    cout << "Tulostetaan pinon sisalto luvun osoitteesta takaisinpain"<<endl;
    for(int i = 0;i < 30 ;i++)
    {
        cout<< "pinon sisalto = " << *(t.luvunOsoite-i*4) << "paikassa " <<  i*4 << endl;
    }
}
