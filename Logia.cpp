#include "Logia.h"

Logia::Logia(){

}

Logia::Logia(string nombre, string elemento) : Fruta(nombre){

}

void Logia::setElemento(string elemento) {
    this->elemento = elemento;
}

string Logia::getElemento() {
    return this->elemento;
}

Logia::~Logia(){
    
}
