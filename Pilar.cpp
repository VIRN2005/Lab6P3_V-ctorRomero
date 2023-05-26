#include <cstdlib>
#include <ctime>
#include "Cazador.h"
#include "Pilar.h"

Pilar::Pilar(string nombre) : Cazador(nombre) {
	asignarVidaExtra();
	asignarAtaqueExtra();
	lunasSuperioresVencidas = 0;
}

// Generar Random entre 80 y 90
void Pilar::asignarVidaExtra() {
	vidaExtra = rand() % 11 + 80;
	vidaTotal += vidaExtra;
}

void Pilar::asignarAtaqueExtra() {
	ataqueExtra += 100;
}

void Pilar::asignarLunasSuperioresVencidas() {
	lunasSuperioresVencidas++;
}

// Sumar 20 puntos de ataque por cada luna superior vencida
int Pilar::calcularAtaqueTotal() {
	int ataqueTotal = Cazador::calcularAtaqueTotal() + ataqueExtra;
	return ataqueTotal;
}

void Pilar::mostrarInformacion() {
	Cazador::mostrarInformacion();
	cout << "Lunas Superiores Vencidas: " << lunasSuperioresVencidas << endl;
	cout << "Vida Extra: " << vidaExtra << " puntos." << endl;
	cout << "Ataque Extra: " << ataqueExtra << " puntos." << endl;
}

Pilar::~Pilar() {

}
