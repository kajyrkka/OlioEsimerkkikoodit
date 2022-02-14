#ifndef CLOCK_H
#define CLOCK_H
#include <QTimer>
#include <QDebug>

class Clock : public QTimer
{
    Q_OBJECT  // Mitä tapahtuu, jos tämän unohtaa?
public:
    Clock();
    void startClock();
public slots:
    void showTime();
signals:
    void stopProgram();
private:
    short h,m,s;
};

#endif // CLOCK_H
