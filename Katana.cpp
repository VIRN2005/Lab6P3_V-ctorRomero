#include <cstdlib>
#include <ctime>
#include "katana.h"

// Crea Ataque entre 10 y 20
void Katana::setAtaque() {
	ataque = rand() % 11 + 10;
}

// Crea Color Random
void Katana::setColor() {
	int colorRand = rand() % 4;
	switch (colorRand) {
	case 0: {
		color = "Rojo";
	}
		  break;

	case 1: {
		color = "Negro";
	}
		  break;

	case 2: {
		color = "Morado";
	}
		  break;

	case 3: {
		color = "Naranja";
	}
		  break;
	}
}

// Obteener Ataque
int Katana::getAtaque() {
	return ataque;
}

// Obtener Color
std::string Katana::getColor() {
	return color;
}

