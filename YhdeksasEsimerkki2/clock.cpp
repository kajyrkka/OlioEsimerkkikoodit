#include "clock.h"

Clock::Clock():h(0),m(0),s(0)
{
    pQTimer = new QTimer;
    QObject::connect(pQTimer,SIGNAL(timeout()),
                     this,SLOT(showTime()));
    // testataanpa vähän


    QStack<int> pino;
    pino.push(1);
    pino.push(2);
    pino.push(3);

    foreach(int foo,pino)
    {
        qDebug()<<"popataan pinosta = "<<foo;
    }





}

Clock::~Clock()
{
    delete pQTimer;
    pQTimer = nullptr;
}

void Clock::startClock()
{
    pQTimer->start(100);
}

void Clock::showTime()
{
    s++;
    if(s==60)
    {
        emit stopProgram();
        s = 0;
        m++;
        if(m==60)
        {

            m = 0;
            h++;
            if(h==24)
            {
                h=0;
            }
        }
    }
    qDebug()<<"Current time is " << h <<":"<<m<<":"<<s;
}
