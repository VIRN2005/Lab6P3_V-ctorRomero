#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <string.h>
#include "Cazador.h"
#include "Katana.h"
#include "Respiracion.h"
#include "Respiracion_Agua.h"
#include "Respiracion_Fuego.h"
#include "Respiracion_Roca.h"
using namespace std;

static Katana* k = new Katana();

Cazador::Cazador() {

}

//Constructor
Cazador::Cazador(string nombre) {
	asignarVida();
	asignarAtaque();
	this->katana = new Katana();
	this->respiracion = crearRespiracion();
}

// Crea Vida Random entre 20 a 30
void Cazador::asignarVida() {
	vida = rand() % 11 + 20;
}

// Generar un random entre 20 y 30
void Cazador::asignarAtaque() {
	puntosAtaque = rand() % 11 + 20;
}

// Asignación de Respiración
Respiracion* Cazador::crearRespiracion() {
	cout << "--MENU DE RESPIRACION-- \n";
	cout << "1) Agua \n";
	cout << "2) Fuego \n";
	cout << "3) Roca \n";

	cout << "Ingrese un valor para determinar la Respiracion: ";
	int tipoRespiracion;
	cin >> tipoRespiracion;

	switch (tipoRespiracion) {
	case 1: {
		respiracion = new Respiracion_Agua();
	}
		  break;

	case 2: {
		respiracion = new Respiracion_Fuego();
	}
		  break;
	case 3: {
		respiracion = new Respiracion_Roca();
	}
		  break;

	default: {
		return nullptr;
	}
	}
}

int Cazador::calcularAtaqueTotal() {
	int ataqueTotal = puntosAtaque + katana->getAtaque() + respiracion->getRangoPoder();
	return ataqueTotal;
}

void Cazador::recibirAtaque(int ataque) {
	vida -= ataque;
	if (vida < 0) {
		vida = 0;
	}
}

void Cazador::recuperarVida() {
	vida = vidaTotal;
}

std::string Cazador::getNombre() {
	return nombre;
}

int Cazador::getVida() {
	return vida;
}
// Imprimir
void Cazador::mostrarInformacion() {
	cout << "Nombre: " << this->nombre << endl;
	cout << "Vida: " << this->vida << " puntos." << endl;
	cout << "Puntos de Ataque: " << this->puntosAtaque << endl;
	cout << "Katana: " << endl;
	this->katana->mostrarInformacion();
	cout << "Respiración: " << endl;
	//respiracion->mostrarInformacion();
}

Cazador::~Cazador() {
	delete katana;
	delete respiracion;
}
