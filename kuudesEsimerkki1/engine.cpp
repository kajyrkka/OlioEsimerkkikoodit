#include "engine.h"

Engine::Engine()
{
    cout<<"Now at Engine constructor"<<endl;
    cout<<"Let's call Engine private function openReader() "<<endl;
    openReader();
}

Engine::~Engine()
{
    cout<<"Now at Engine destructor"<<endl;
    cout<<"Let's call Engine private function closeReader() "<<endl;
    closeReader();
}

void Engine::openReader()
{
    cout<<"Now at Engine openReader function"<<endl;
}

void Engine::closeReader()
{
    cout<<"Now at Engine closeReader function"<<endl;
}

string Engine::readSerialPortData()
{
    cout<<"Now at Engine readSerialPortData"<<endl;
    string number = "12345678";
    return number;
}
