#pragma once
#include "Seres.h"

class Piratas : public Seres{
private:
    string oceano;
    string tripulacion;

public:
    Piratas ();
    Piratas(string, int, string,Fruta,bool,bool,bool,string, string);
    Piratas(string, int, string,bool,bool,bool,string, string);
    void setOceano(string);
    string getOceano();
    void setTripulacion(string);
    string getTripulacion();
    ~Piratas ();
};
