#include <iostream>
#include <string>
#include "Katana.h"
#include "respiracion.h"
using namespace std;

class Cazador {
private:
	string nombre;
	int vida;
	Katana katana;
	Respiracion* respiracion;
	int puntosAtaque;

public:
	Cazador();
	Cazador(string nombre);
	void asignarVida();
	void asignarKatana();
	void asignarRespiracion();
	void asignarPuntosAtaque();
	void mostrarInformacion();
};


