#pragma once
#include <iostream>
#include <string>
using namespace std;

class Luna_Superior {
private:
	string nombre;
	int posicion;
	int vida;
	int ataque;

public:
	Luna_Superior();
	Luna_Superior(string, int);
	~Luna_Superior();
	void recibirAtaque(int);
	void asignarVida();
	void asignarAtaque();
	void mostrarInformacion();
	int getVida();
	int getAtaque();
};


