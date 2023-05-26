#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Cazador.h"
#include "Katana.h"
using namespace std;

static Katana* k = new Katana();

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

// Crea Vida Random entre 20 a 30
void Cazador::asignarVida() {
	vida = rand() % 11 + 20;
}

// Se le da Katana a cada Cazador
void Cazador::asignarKatana() {
	k->setAtaque();
	k->setColor();
}

// Asignación de Respiración
void Cazador::asignarRespiracion() {
	cout << "--MENU DE RESPIRACIÓN-- \n";
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
	}
}

// Generar un número aleatorio entre 20 y 30
void Cazador::asignarPuntosAtaque() {
	puntosAtaque = rand() % 11 + 20;
}

// Imprimir
void Cazador::mostrarInformacion() {
	cout << "Nombre: " << nombre << std::endl;
	cout << "Vida: " << vida << std::endl;
	cout << "Katana - Ataque: " << katana.getAtaque() << ", Color: " << katana.getColor() << std::endl;
	cout << "Respiración - Rango de poder: " << respiracion->getRangoPoder() << std::endl;
	cout << "Puntos de Ataque: " << puntosAtaque << std::endl;
}
