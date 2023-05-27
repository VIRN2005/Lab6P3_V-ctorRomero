#pragma once
#include <string>

class Respiracion {
protected:
    int rangoPoder;

public:
    void mostrarInformacion();
    virtual void generarRangoPoder() = 0;
    int getRangoPoder();
};

