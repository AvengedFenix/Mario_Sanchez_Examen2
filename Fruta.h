#pragma once

class Fruta {
private:
    string nombre;

public:
    Fruta ();
    Fruta(string);
    void setNomrbe(string);
    string getNombre();
    virtual ~Fruta ();
};
