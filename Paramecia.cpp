#include "Paramecia.h"

Paramecia::Paramecia(){

}

Paramecia::Paramecia(string nombre, string descripcion) : Fruta(nombre){
    this->nombre = nombre;
    this->descripcion = descripcion;
}

void Paramecia::setDescripcion(string descripcion){
    this->descripcion = descripcion;
}

string Paramecia::getDescripcion(){
    return this->descripcion;
}

Paramecia::~Paramecia(){
    
}
