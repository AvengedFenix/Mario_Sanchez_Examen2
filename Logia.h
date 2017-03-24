#pragma once
#include "Fruta.h"

class Logia {
private:
    string elemento;

public:
    Logia ();
    Logia(string,string);
    void setElemento(string);
    string getElemento();
    virtual ~Logia ();
};
