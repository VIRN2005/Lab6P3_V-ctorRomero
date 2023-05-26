#pragma once
#include <string>

class Respiracion {
protected:
    int rangoPoder;

public:
    virtual void generarRangoPoder() = 0;
    int getRangoPoder();
};

