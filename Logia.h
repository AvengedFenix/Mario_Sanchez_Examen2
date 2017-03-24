#pragma once
#include <string>
#include "Fruta.h"


using namespace std;

class Logia : public Fruta{
private:
    string elemento;

public:
    Logia ();
    Logia(string,string);
    void setElemento(string);
    string getElemento();
    virtual ~Logia ();
};
