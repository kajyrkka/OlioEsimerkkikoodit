#ifndef BASECLASS_H
#define BASECLASS_H

#include <QObject>
#include <QDebug>

class BaseClass : public QObject
{
    Q_OBJECT
public:
    BaseClass();
    ~BaseClass();
    void setPassword(QString);
    QString getPassword(void);
    virtual QString guessPassword();
private:
    QString password;
signals:
    void passwordSetSignal(QString);
};

#endif // BASECLASS_H
