#include <iostream>
#include <cstdlib>
#include <ctime>
#include "cazador.h"

Cazador::Cazador() {

}

//Constructor
Cazador::Cazador(string nombre) {
    this->nombre = nombre;
    asignarVida();
    asignarKatana();
    asignarRespiracion();
    asignarPuntosAtaque();
}
