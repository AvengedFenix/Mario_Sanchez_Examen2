#include "Seres.h"

Seres::Seres(){

}

Seres::Seres(string raza, int edad, string nombre, Fruta f, bool hObs, bool hArma, bool hRey){
    this->raza = raza;
    this->edad =edad;
    this->nombre = nombre;
    this->f = f;
    this->hObs = hObs;
    this->hArma = hArma;
    this->hRey = hRey;
}

Seres::Seres(string raza, int edad, string nombre, bool hObs, bool hArma, bool hRey){
    this->raza = raza;
    this->edad =edad;
    this->nombre = nombre;
    this->hObs = hObs;
    this->hArma = hArma;
    this->hRey = hRey;
}

void Seres::setRaza(string raza) {
    this->raza = raza;
}

string Seres::getRaza() {
    return this->raza;
}

void Seres::setEdad(int edad) {
    this->edad =edad;
}

int Seres::getEdad() {
    return this->edad;
}

void Seres::setNombre(string nombre) {
    this->nombre = nombre;
}

string Seres::getNombre() {
    return this->nombre;
}

void Seres::setF(Fruta f) {
    this->f = f;
}

Fruta Seres::getF() {
    return this->f;
}

void Seres::setHObs(bool hObs) {
    this->hObs = hObs;
}

bool Seres::getHObs() {
    return this->hObs;
}

void Seres::setHArma(bool hArma) {
    this->hArma = hArma;
}

bool Seres::getHArma() {
    return this->hArma;
}

void Seres::setHRey(bool hRey) {
    this->hRey = hRey;
}

bool Seres::getHRey() {
    return this->hRey;
}


Seres::~Seres(){

}
