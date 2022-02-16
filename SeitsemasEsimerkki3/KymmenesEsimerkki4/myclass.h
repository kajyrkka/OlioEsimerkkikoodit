#ifndef MYCLASS_H
#define MYCLASS_H
#include <QString>
#include <QThread>
#include <QDebug>


class myClass : public QThread
{
private:
    QString threadName;

protected:
    virtual void run() override;
public:
    myClass(QString name);
};

#endif // MYCLASS_H
