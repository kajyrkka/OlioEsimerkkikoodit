#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H
#include <iostream>
#include <math.h>
using namespace std;

#include "calculator.h"

class Scientific : public Calculator
//class Scientific : protected Calculator
//class Scientific : private Calculator
{
public:
    Scientific();
    ~Scientific();
    double Ssqrt(double);
protected:
    void Scientific_protected(void);
    double ScientificProtectedVariable = 0;
private:
    void Scientific_private(void);
    double ScientificPrivateVariable = 0;



};

#endif // SCIENTIFIC_H
