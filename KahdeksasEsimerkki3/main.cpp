#include <QCoreApplication>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Tehdään tähän projektiin yhdessä seuraavat jutut:
    // Lisätään luokka myClass
    // Muutetaan tuo luokka myClass sellaiseksi, että se voi lähettää ja vastaanottaa signaaleja
    // Toteutetaan myClass luokkaan public metodi, jota kutsuttaessa luokan signaali lähetetään
    // Luodaan tässä mainissa olio luokasta MyClass
    // Käytetään olion public metodia, joka lähettää signaalin.
    // Kytketään tuo signaali tässä mainissa a-olion quit() funktioon, joka lopettaa
    // sanomajonon.

    return a.exec();
}
