#include <iostream>
#include <string>
#include "Katana.h"
#include "respiracion.h"
using namespace std;

class Cazador {
private:
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


