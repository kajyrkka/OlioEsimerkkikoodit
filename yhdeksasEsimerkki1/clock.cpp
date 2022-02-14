#include "clock.h"

Clock::Clock():h(0),m(0),s(0)
{
    connect(this,SIGNAL(timeout()),
            this,SLOT(showTime()));
}

void Clock::startClock()
{
    start(100);
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
