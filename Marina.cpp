#include "Marina.h"

Marina::Marina(){

}


Marina::Marina(string raza, int edad, string nombre ,Fruta f ,bool hObs,bool hArma, bool hRey ,string fecha, string rango) : Seres(raza, edad, nombre, f, hObs, hArma, hRey){
    this->raza = raza;
    this->edad =edad;
    this->nombre = nombre;
    this->f = f;
    this->hObs = hObs;
    this->hArma = hArma;
    this->hRey = hRey;
    this->fecha = fecha;
    this->rango = rango;
}

Marina::Marina(string raza, int edad, string nombre ,bool hObs,bool hArma, bool hRey ,string fecha, string rango) : Seres(raza, edad, nombre, hObs, hArma, hRey){
    this->raza = raza;
    this->edad =edad;
    this->nombre = nombre;
    this->hObs = hObs;
    this->hArma = hArma;
    this->hRey = hRey;
    this->fecha = fecha;
    this->rango = rango;
}

void Marina::setFecha(string fecha) {
    this->fecha = fecha;
}

string Marina::getFecha() {
    return this->fecha;
}

void Marina::setRango(string rango) {
    this->rango = rango;
}

string Marina::getRango() {
    return this->rango;
}

Marina::~Marina(){

}
