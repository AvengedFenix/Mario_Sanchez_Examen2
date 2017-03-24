#pragma once
#include "Seres.h"

class Revolucionarios : public Seres{
private:
    string fecha;

public:
    Revolucionarios ();
    Marina(string, int, string,Fruta,bool,bool,bool,string);
    Marina(string, int, string,bool,bool,bool,string);
    void setFecha(string);
    string getFecha();
    virtual ~Revolucionarios ();
};
