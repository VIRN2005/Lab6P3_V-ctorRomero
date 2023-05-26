#include "Respiracion_Agua.h"
#include <cstdlib>
#include <ctime>

// Generar Random entre 60 y 80
void Respiracion_Agua::generarRangoPoder() {
    rangoPoder = rand() % 21 + 60;
}
