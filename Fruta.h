#pragma once

using namespace std;

class Fruta {
protected:
    string nombre;

public:
    Fruta ();
    Fruta(string);
    void setNomrbe(string);
    string getNombre();
    virtual ~Fruta ();
};
