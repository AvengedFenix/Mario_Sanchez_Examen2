#pragma once
#include "Fruta.h"

using namespace std;

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
