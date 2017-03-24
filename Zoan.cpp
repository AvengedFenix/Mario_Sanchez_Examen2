#include "Zoan.h"

using namespace std;

Zoan::Zoan(){

}

Zoan::Zoan(string nombre, string tipo, string animal) : Fruta(nombre){
    this->nombre=nombre;
    this->tipo = tipo;
    this->animal = animal;
}

void Zoan::setTipo(string tipo) {
    this->tipo = tipo;
}

string Zoan::getTipo() {
    return this->tipo;
}

void Zoan::setAnimal(string animal) {
    this->animal = animal;
}

string Zoan::getAnimal() {
    return this->animal;
}
