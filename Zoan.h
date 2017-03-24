#pragma once
#include "Fruta.h"

class Zoan {
private:
    stirng tipo;
    string animal;

public:
    Zoan ();
    Zoan(string,string,string);
    void setTipo();
    string getTipo();
    void setAnimal();
    string getAnimal();
    ~Zoan ();
};
