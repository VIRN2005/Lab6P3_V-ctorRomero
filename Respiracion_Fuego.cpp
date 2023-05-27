#include "Respiracion_Fuego.h"
#include <cstdlib>
#include <ctime>

// Generar Random entre 60 y 80
void Respiracion_Fuego::generarRangoPoder() {
    rangoPoder = rand() % 21 + 80;
}


