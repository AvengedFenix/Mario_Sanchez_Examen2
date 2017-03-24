#pragma once
#include <string>
#include "Seres.h"

using namespace std;

class Marina : public Seres{
private:
    string fecha;
    string rango;

public:
    Marina();
    Marina(string, int, string,Fruta,bool,bool,bool,string, string);
    Marina(string, int, string,bool,bool,bool,string, string);
    void setFecha(string);
    string getFecha();
    void setRango(string);
    string getRango();
    ~Marina ();
};
