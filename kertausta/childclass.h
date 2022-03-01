#ifndef CHILDCLASS_H
#define CHILDCLASS_H

#include "baseclass.h"
#include <QDebug>

class childClass : public BaseClass
{
    Q_OBJECT
public:
    childClass();
    ~childClass();
    virtual QString guessPassword() override;

public slots:
    void receivePassword(QString);
};

#endif // CHILDCLASS_H
