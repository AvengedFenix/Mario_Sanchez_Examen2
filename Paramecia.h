#pragma once
#include <string>
#include "Fruta.h"

using namespace std;

class Paramecia : public Fruta{
private:
    string descripcion;

public:
    Paramecia ();
    Paramecia(string,string);
    void setDescripcion(string);
    string getDescripcion();
    virtual ~Paramecia ();
};
