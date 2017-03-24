#pragma once

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
