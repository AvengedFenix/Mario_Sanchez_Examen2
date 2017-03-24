#include "Revolucionarios.h"

Revolucionarios::Revolucionarios(){

}


Revolucionarios::Revolucionarios(string raza, int edad, string nombre ,Fruta f ,bool hObs,bool hArma, bool hRey ,string fecha, string rango) : Seres(raza, edad, nombre, f, hObs, hArma, hRey){
    this->raza = raza;
    this->edad =edad;
    this->nombre = nombre;
    this->f = f;
    this->hObs = hObs;
    this->hArma = hArma;
    this->hRey = hRey;
    this->fecha = fecha;
}

Revolucionarios::Revolucionarios(string raza, int edad, string nombre ,bool hObs,bool hArma, bool hRey ,string fecha, string rango) : Seres(raza, edad, nombre, hObs, hArma, hRey){
    this->raza = raza;
    this->edad =edad;
    this->nombre = nombre;
    this->hObs = hObs;
    this->hArma = hArma;
    this->hRey = hRey;
    this->fecha = fecha;
}

void Revolucionarios::setFecha(string fecha) {
    this->fecha = fecha;
}

string Revolucionarios::getFecha() {
    return this->fecha;
}



Revolucionarios::~Revolucionarios(){

}
