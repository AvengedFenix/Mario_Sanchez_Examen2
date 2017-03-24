#pragma once
#include <string>
#include "Fruta.h"

class Zoan : public Fruta{
private:
    string tipo;
    string animal;

public:
    Zoan();
    Zoan(string,string,string);
    void setTipo(string);
    string getTipo();
    void setAnimal(string);
    string getAnimal();
    ~Zoan();
};
