#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
using namespace std;

class Engine
{
public:
    Engine();
    ~Engine();
     string readSerialPortData();
private:
    //QSerialPort * pQSerialPort;  // ei tehdä tätä oikeasti koska ei QT-projekti

    void openReader();
    void closeReader();

};

#endif // ENGINE_H
