#include "Marina.h"

Marina::Marina(){

}

Marina::Marina(){

}

Marina::Marina(string raza, int edad, string nombre ,Fruta f ,bool hObs,bool hArma, bool hRey ,string fecha, string rango) : Seres(){

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
