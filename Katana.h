#pragma once
#include <iostream>
#include <string>

using namespace std;

class Katana {
private:
	int ataque;
	string color;

public:
	void asignarAtaque();
	void asignarColor();
	void mostrarInformacion();
	int getAtaque();
	string getColor();
};


