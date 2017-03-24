#include "Seres.h"

Piratas::Piratas(string raza, int edad, string nombre ,Fruta f ,bool hObs,bool hArma, bool hRey ,string oceano, string tripulacion) : Seres(raza, edad, nombre, f, hObs, hArma, hRey){
    this->raza = raza;
    this->edad =edad;
    this->nombre = nombre;
    this->f = f;
    this->hObs = hObs;
    this->hArma = hArma;
    this->hRey = hRey;
    this->oceano = oceano;
    this->tripulacion = tripulacion;
}

Piratas::Piratas(string raza, int edad, string nombre ,bool hObs,bool hArma, bool hRey ,string oceano, string tripulacion) : Seres(raza, edad, nombre, hObs, hArma, hRey){
    this->raza = raza;
    this->edad =edad;
    this->nombre = nombre;
    this->hObs = hObs;
    this->hArma = hArma;
    this->hRey = hRey;
    this->oceano = oceano;
    this->tripulacion = tripulacion;
}


void Piratas::setOceano(string oceano) {
    this->oceano = oceano;
}

string Piratas::getOceano() {
    return this->oceano;
}

void Piratas::setTripulacion(string tripulacion) {
    this->tripulacion = tripulacion;
}

string Piratas::getTripulacion() {
    return this->tripulacion;
}

Piratas::Piratas(){

}
