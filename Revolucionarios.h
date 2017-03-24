#pragma once
#include <string>
#include "Seres.h"

using namespace std;

class Revolucionarios : public Seres{
private:
    string fecha;

public:
    Revolucionarios ();
    Revolucionarios(string, int, string,Fruta,bool,bool,bool,string);
    Revolucionarios(string, int, string,bool,bool,bool,string);
    void setFecha(string);
    string getFecha();
    virtual ~Revolucionarios();
};
