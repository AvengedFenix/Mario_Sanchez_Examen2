#pragma once

class Seres {
private:
    string raza;
    int edad;
    string nombre;
    Fruta f;
    bool hObs;
    bool hArma;
    bool hRey;

public:
    Seres ();
    Seres(string, int, string,Fruta,bool,bool,bool);
    void setRaza(string);
    string getRaza();
    void setEdad(string);
    string getEdad();
    void setNombre(string);
    string getNombre();
    void setF(Fruta);
    Fruta getF();
    void setHObs(bool);
    bool getHObs();
    void setHArma(bool);
    bool getHArma();
    void setHRey(bool);
    bool getHRey();
    ~Seres ();
};
