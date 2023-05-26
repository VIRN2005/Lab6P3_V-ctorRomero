#include "Respiracion_Roca.h"
#include <cstdlib>
#include <ctime>

// Generar Random entre 60 y 80
void Respiracion_Roca::generarRangoPoder() {
    rangoPoder = rand() % 21 + 100;
}
