#ifndef MYCLASS_H
#define MYCLASS_H
#include <QThread>
#include <QDebug>

class myClass:public QThread
{
private:
    QString threadName;
protected:
    virtual void run() override;
public:
    myClass(QString);
};

#endif // MYCLASS_H
