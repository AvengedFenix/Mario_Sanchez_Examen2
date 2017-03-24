#include "Fruta.h"
#include "Logia.h"
#include "Marina.h"
#include "Paramecia.h"
#include "Piratas.h"
#include "Revolucionarios.h"
#include "Seres.h"
#include "Zoan.h"
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    std::vector<Seres*> s;
    std::vector<Frutas*> f;
    char resp ='s';
    while (resp == 's' || resp 'S') {
        agregar();
    }
    return 0;
}

vector agregar(vector<Seres*> s, vector<Frutas*> f) {
    //string raza;
    int edad;
    string nombre;
    Fruta fruta;
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
                        std::cout << i<<". " << f[i].getNombre()<<endl;
                    }// fin for
                    int pos;
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
                    if (fs == 's' || fs == 'S') {
                        s.push_back(new Marina("Marina",edad,nombre,fruta,hObs,hArma,hRey,fecha,rango));
                        f[pos].erase(f.begin() + pos);
                    } else{
                        s.push_back(new Marina("Marina",edad,nombre,hObs,hArma,hRey,fecha,rango));
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
                    if (fs == 's' || fs == 'S') {
                        s.push_back(new Marina("Marina",edad,nombre,fruta,hObs,hArma,hRey,oceano,tripulacion,funcion));
                    } else{
                        s.push_back(new Marina("Marina",edad,nombre,hObs,hArma,hRey,oceano,tripulacion,funcion));
                    }
                    break;
                }// fin case 1.2
                case 3:{
                    string fecha;
                    std::cout << "Fecha" << endl;
                    std::cin >> Fecha;
                    if (fs == 's' || fs == 'S') {
                        s.push_back(new Marina("Marina",edad,nombre,fruta,hObs,hArma,hRey,fecha));
                    } else{
                        s.push_back(new Marina("Marina",edad,nombre,hObs,hArma,hRey,fecha));
                    }
                    break;
                }//fin case 1.3
            }//fin switch 1.1
            return s;
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
                    f.push_back(new Parmecia(nombre, descripcion));
                    break;
                }//fin case 2.1
                case 2:{
                    string tipo;
                    string animal;
                    std::cout << "Tipo" << endl;
                    std::cin >> tipo;
                    std::cout << "animal" << endl;
                    std::cin >> animal;
                    f.push_back(new Parmecia(nombre,tipo,animal));
                    break;
                }//fin case 2.2
                case 3:{
                    string elemento;
                    f.push_back(new Logia(nombre, elemento));
                    break;
                }// fin case 2.3
            }//fin switch 2.1
            return f;
            break;
        }//fin case 2
    }//fin switch
}// fin funcio agregar

void crearLogVendedor(Seres*){
  ofstream outfile;
  char filename[256] = {0};
  time_t currentTime = time(0);
  tm* currentDate = localtime(&currentTime);
  try{
    const int directorio = system("mkdir -p ./Usuarios_log");//-p es para crear directorio solo si no existe
  } catch (...) {

  }

  strcpy(filename, "./Usuarios_log/");
  strcat(filename, fmt("%s_%d-%d-%d.log",
         usuario -> getNombre().c_str(),
         currentDate->tm_mday, currentDate->tm_mon+1,
         currentDate->tm_year+1900).c_str());
  stringstream ss;

  ss << "\t\tGameHub\n\nNombre: " << usuario -> getNombre() << "\nHora entrada: " << usuario -> getHoraEntrada() << "\nHora salida: "
  << usuario -> getHoraSalida() << "\n\nCantidad de articulos vendidos: " << cantidadarticulos << "\nDinero generado: " << dinero << "\n-----------------------\n";

  outfile.open(filename, std::ios::app); //si no quiero append, solo le borro el std::ios::app
  outfile << ss.str();
  outfile.close();
}
