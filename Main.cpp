#include "Fruta.h"
#include "Logia.h"
#include "Marina.h"
#include "Paramecia.h"
#include "Piratas.h"
#include "Revolucionarios.h"
#include "Seres.h"
#include "Zoan.h"
#include <vector>
#include <sstream>
#include <typeinfo>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <cstdlib>
#include <cstdarg>
#include <cstring>

using namespace std;

void agregar(vector<Seres*>, vector<Fruta*>);
void crearLogSeres(Seres*);

int main(int argc, char const *argv[]) {
    std::vector<Seres*> s;
    std::vector<Fruta*> f;
    char resp ='s';
    while (resp == 's' || resp == 'S') {
        agregar(s, f);
        std::cout << "Quiere seguir agregando? S/N" << endl;
        std::cin >> resp;
    }
    return 0;
}

void agregar(vector<Seres*> s, vector<Fruta*> f) {
    int pos;
    string raza;
    int edad;
    string nombre;
    Fruta* fruta;
    bool hObs;
    bool hArma;
    bool hRey;
    std::cout << "1. Seres \n2. Frutas" << endl;
    int ag;
    std::cin >> ag;
    switch (ag) {
        case 1:{
            std::cout << "1. Marina \n2. Piratas\n3. Revolucionarios" << endl;
            int tipo;
            std::cin >> tipo;
            std::cout << "Ingrese:" << endl;
            std::cout << "Edad" << endl;
            std::cin >> edad;
            std::cout << "nombre" << endl;
            std::cin >> nombre;
            std::cout << "Su personaje tiene fruta S/N" << endl;
            char fs;//fruta si
            std::cin >> fs;
            if (fs== 's' || fs == 'S') {
                if (f.size()==0) {
                    std::cout << "Usted no ha agregado ni una fruta porfavor agregue" << endl;
                    fs = 'n';
                } else{
                    for (int i = 0; i < f.size(); i++) {
                        std::cout << i<<". " << f[i]->getNombre()<<endl;
                    }// fin for

                    std::cin >> pos;
                    fruta = f[pos];
                }//fin else

            }//fin si tiene fruta
            int op;
            std::cout << "Haki de Obs \n0. False \n1. True " << endl;
            std::cin >> op;
            if (op == 0) {
                hObs = false;
            }else{
                hObs = true;
            }
            std::cout << "Haki de Armadu \n0. False \n1. True " << endl;
            std::cin >> op;
            if (op == 0) {
                hArma = false;
            }else{
                hArma = true;
            }
            std::cout << "Haki de Rey \n0. False \n1. True " << endl;
            std::cin >> op;
            if (op == 0) {
                hRey = false;
            }else{
                hRey = true;
            }
            switch (tipo) {
                case 1:{
                    string fecha;
                    string rango;
                    std::cout << "Fecha" << endl;
                    std::cin >> fecha;
                    std::cout << "Rango" << endl;
                    std::cin >> rango;
                    raza = "Marina";
                    if (fs == 's' || fs == 'S') {
                        s.push_back(new Marina(raza,edad,nombre,fruta,hObs,hArma,hRey,fecha,rango));
                        f.erase(f.begin() + pos);
                    } else{
                        s.push_back(new Marina(raza,edad,nombre,hObs,hArma,hRey,fecha,rango));
                    }
                    break;
                }// fin case 1.1
                case 2:{
                    string oceano;
                    string tripulacion;
                    string funcion;
                    std::cout << "Oceano" << endl;
                    std::cin >> oceano;
                    std::cout << "tripulacion" << endl;
                    std::cin >> tripulacion;
                    std::cout << "Funcion" << endl;
                    std::cin >> funcion;
                    raza = "Piratas";
                    if (fs == 's' || fs == 'S') {
                        s.push_back(new Piratas(raza,edad,nombre,fruta,hObs,hArma,hRey,oceano,tripulacion,funcion));
                    } else{
                        s.push_back(new Piratas(raza,edad,nombre,hObs,hArma,hRey,oceano,tripulacion,funcion));
                    }
                    break;
                }// fin case 1.2
                case 3:{
                    string fecha;
                    std::cout << "Fecha" << endl;
                    std::cin >> fecha;
                    raza = "Revolucionarios";
                    if (fs == 's' || fs == 'S') {
                        s.push_back(new Revolucionarios(raza,edad,nombre,fruta,hObs,hArma,hRey,fecha));
                    } else{
                        s.push_back(new Revolucionarios(raza,edad,nombre,hObs,hArma,hRey,fecha));
                    }
                    break;
                }//fin case 1.3
            }//fin switch 1.1
            crearLogSeres(s.back());
            //return s;
            break;
        }//fin case 1
        case 2:{
            int agfru;
            std::cout << "1. Parmecia \n2. Zoan \n3. Logia" << endl;
            std::cin >> agfru;
            std::cout << "Nombre" << endl;
            switch (agfru) {
                case 1:{
                    string descripcion;
                    std::cout << "descripcion" << endl;
                    std::cin >> descripcion;
                    f.push_back(new Paramecia(nombre, descripcion));
                    break;
                }//fin case 2.1
                case 2:{
                    string tipo;
                    string animal;
                    std::cout << "Tipo" << endl;
                    std::cin >> tipo;
                    std::cout << "animal" << endl;
                    std::cin >> animal;
                    f.push_back(new Zoan(nombre,tipo,animal));
                    break;
                }//fin case 2.2
                case 3:{
                    string elemento;
                    f.push_back(new Logia(nombre, elemento));
                    break;
                }// fin case 2.3
            }//fin switch 2.1
            //return f;
            break;
        }//fin case 2
    }//fin switch

}// fin funcio agregar

void crearLogSeres(Seres* ser){
  ofstream outfile;
  char filename[256] = {0};

 /* try{
    const int directorio = system("mkdir -p ./Usuarios_log");//-p es para crear directorio solo si no existe
  } catch (...) {

  }*/

  strcpy(filename, "./Usuarios_log/nombre.log");
  stringstream ss;
  stringstream ss2;

  if (typeid(ser    -> getF()).name() == typeid(Paramecia).name()) {
      ss2 << " Nombre Fruta: " << ser -> getF() -> getNombre() << " Descripcion: "; /*<< ser -> getF() -> getDescripcion();*/
  } else if (typeid(ser -> getF()).name() == typeid(Logia).name()) {
      ss2 << " Nombre Fruta: " << ser -> getF() -> getNombre() << " Elemento: "; /*<< ser -> getF() -> getElemento();*/
  } else if (typeid(ser -> getF()).name() == typeid(Logia).name()) {
      ss2 << " Nombre Fruta: " << ser -> getF() -> getNombre() << " Tipo: "; /*<< ser -> getF() -> getTipo() << " Animal: " << ser -> getF() -> getAnimal();*/
  }

  if (ser -> getRaza() == "Marina") {
      ss << "Raza: " << ser -> getRaza() << " Edad: " << ser -> getEdad() << " Nombre: "
      << ser-> getNombre() << " Fruta " << ss2.str() << " Haki Obs " << ser -> getHObs() << " Haki Armadu " << ser -> getHArma() << " Haki  del Rey: " << ser ->getHRey() << " Fecha Ingreso: "; /*<< ser ->getFecha() << " Rango: "<< ser->getRango();*/
  } else if (ser -> getRaza() == "Piratas") {
      ss << "Raza: " << ser -> getRaza() << " Edad: " << ser -> getEdad() << " Nombre: "
      << ser-> getNombre() << " Fruta " << ss2.str() << " Haki Obs " << ser -> getHObs() << " Haki Armadu " << ser -> getHArma() << " Haki  del Rey: " << ser ->getHRey() << " Oceano: ";  /*<< ser ->getOceano() << " Tripulacion: "<< ser->getTripulacion() << " Funcion: " << ser ->getFuncion();*/
  } else if ( ser -> getRaza() == "Revolucionarios") {
      ss << "Raza: " << ser -> getRaza() << " Edad: " << ser -> getEdad() << " Nombre: "
      << ser-> getNombre() << " Fruta " << ss2.str() << " Haki Obs " << ser -> getHObs() << " Haki Armadu " << ser -> getHArma() << " Haki  del Rey: " << ser ->getHRey() << " Fecha Ingreso: "; /*<< ser ->getFecha();*/
  }


  outfile.open(filename, std::ios::app); //si no quiero append, solo le borro el std::ios::app
  outfile << ss.str();
  outfile.close();
}
