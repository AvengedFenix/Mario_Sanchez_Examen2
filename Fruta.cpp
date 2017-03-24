#include "Fruta.h"

Fruta::Fruta(){

}

Fruta::Fruta(string nombre){
    this->nombre = nombre;
}

void Fruta::setNombre(string nombre) {
    this->nombre = nombre;
}

string Fruta::getNombre() {
    return this->nombre;
}

Fruta::~Fruta(){

}
