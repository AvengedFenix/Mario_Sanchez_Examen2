#include "Seres.h"

Seres::Seres(){

}

void Seres::setRaza(string raza) {
    this->raza = raza;
}

string Seres::getRaza() {
    return this->raza;
}

void Seres::setEdad(string edad) {
    this->edad =edad;
}

string Seres::getEdad() {
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
