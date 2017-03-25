#pragma once
#include <string>
#include "Fruta.h"

using namespace std;

class Seres {
protected:
    string raza;
    int edad;
    string nombre;
    Fruta* f;
    bool hObs;
    bool hArma;
    bool hRey;

public:
    Seres ();
    Seres(string, int, string,Fruta*,bool,bool,bool);
    Seres(string, int, string,bool,bool,bool);
    void setRaza(string);
    string getRaza();
    void setEdad(int);
    int getEdad();
    void setNombre(string);
    string getNombre();
    void setF(Fruta*);
    Fruta* getF();
    void setHObs(bool);
    bool getHObs();
    void setHArma(bool);
    bool getHArma();
    void setHRey(bool);
    bool getHRey();
    virtual ~Seres();
};
