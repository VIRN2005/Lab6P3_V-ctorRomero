#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Luna_Superior.h"

Luna_Superior::Luna_Superior() {

}

Luna_Superior::Luna_Superior(string nombre, int posicion) {
	this->nombre = nombre;
	this->posicion = posicion;
	asignarVida();
	asignarAtaque();
}

// Generar Random entre 400 y 500
void Luna_Superior::asignarVida() {
	vida = rand() % 101 + 400;
}

// Generar Random entre 150 y 400
void Luna_Superior::asignarAtaque() {
	ataque = rand() % 251 + 150;
}

void Luna_Superior::mostrarInformacion() {
	cout << "Nombre: " << nombre << std::endl;
	cout << "Posición: " << posicion << std::endl;
	cout << "Vida: " << vida << std::endl;
	cout << "Ataque: " << ataque << std::endl;
}

void Luna_Superior::recibirAtaque(int puntosAtaque) {
	vida -= puntosAtaque;

	if (vida < 0) {
		vida = 0;
	}
}

int Luna_Superior::getVida() {
	return vida;
}

int Luna_Superior::getAtaque() {
	return ataque;
}

Luna_Superior::~Luna_Superior() {

}