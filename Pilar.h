#pragma once
#include <iostream>
#include "Cazador.h"
using namespace std;

class Pilar : public Cazador {
private:
    int lunasSuperioresVencidas;
    int vidaExtra;
    int ataqueExtra;
    int vidaTotal;

public:
    Pilar(string);
    ~Pilar();
    void asignarVidaExtra();
    void asignarAtaqueExtra();
    void asignarLunasSuperioresVencidas();
    void mostrarInformacion();
    int calcularAtaqueTotal();
};



