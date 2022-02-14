#ifndef CLOCK_H
#define CLOCK_H
#include <QTimer>
#include <QDebug>
#include <QObject>
#include <QStack>

class Clock : public QObject
{
    Q_OBJECT
public:
    Clock();  // No miksi nyt sitten ei tarvita QObject * parent = nullptr -määrittelyä???
    ~Clock();
    void startClock();

public slots:
    void showTime();

signals:
    void stopProgram();


private:
    QTimer * pQTimer;
    short h,m,s;
};

#endif // CLOCK_H
