#ifndef CAZADOR_H
#define CAZADOR_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Katana.h"
#include "Respiracion.h"
#include "Respiracion_Agua.h"
#include "Respiracion_Fuego.h"
#include "Respiracion_Roca.h"
using namespace std;

class Cazador {
protected:
    string nombre;
    int vida;
    int vidaTotal;
    int puntosAtaque;
    Katana* katana;
    Respiracion* respiracion;

public:
    Cazador();
    Cazador(string nombre);
    ~Cazador();
    void asignarVida();
    void asignarAtaque();
    Respiracion* crearRespiracion();
    void mostrarInformacion();
    int calcularAtaqueTotal();
    void recibirAtaque(int);
    void recuperarVida();
    string getNombre();
    int getVida();
};

#endif

