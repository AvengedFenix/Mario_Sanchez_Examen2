#pragma once
#include <string>
#include "Seres.h"

using namespace std;

class Piratas : public Seres{
private:
    string oceano;
    string tripulacion;
    string funcion;

public:
    Piratas ();
    Piratas(string, int, string,Fruta*,bool,bool,bool,string, string, string);
    Piratas(string, int, string,bool,bool,bool,string, string, string);
    void setOceano(string);
    string getOceano();
    void setTripulacion(string);
    string getTripulacion();
    void setFuncion(string);
    string getFuncion();
    virtual ~Piratas ();
};
