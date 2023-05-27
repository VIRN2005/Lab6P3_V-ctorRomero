#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include "Cazador.h"
#include "Pilar.h"
#include "Luna_Superior.h"
using namespace std;

static vector<Cazador*> cazadores;
static vector<Luna_Superior*> lunas;

void simularCombate(Cazador* cazador, Luna_Superior* lunaSuperior) {
	cout << "Comienza el combate!!!" << endl;
	cout << "Cazador:" << endl;
	cazador->mostrarInformacion();
	cout << "Luna Superior:" << endl;
	lunaSuperior->mostrarInformacion();

	bool turnoCazador = true;

	while (cazador->getVida() > 0 && lunaSuperior->getVida() > 0) {
		if (turnoCazador) {
			int porcentajeAtaque = rand() % 41 + 60;  
			int ataqueCazador = cazador->calcularAtaqueTotal() * porcentajeAtaque / 100;
			lunaSuperior->recibirAtaque(ataqueCazador);
			cout << "El cazador = " << cazador->getNombre() << ", ataca a la Luna" << endl;
			cout << "Valor de Ataque = " << ataqueCazador  << endl;
			cout << "Vida actualizada de la Luna Superior = " << lunaSuperior->getVida() << std::endl;
			turnoCazador = false;

		}
		else {
			int porcentajeAtaque = rand() % 41 + 60; 
			int ataqueLunaSuperior = lunaSuperior->getAtaque() * porcentajeAtaque / 100;
			cazador->recibirAtaque(ataqueLunaSuperior);
			cout << "La Luna Superior ataca al cazador = " << cazador->getNombre() <<endl;
			cout << "Ataque = " << ataqueLunaSuperior << endl;
			cout << "Vida actual del cazador: " << cazador->getVida() << endl;
			turnoCazador = true;
		}

		if (cazador->getVida() > 0 && rand() % 100 < 5) {
			cazador->recuperarVida();
			cout << "El pilar " << cazador->getNombre() << " ha recuperado su vida por completo." << std::endl;
			cout << "Vida actual del pilar: " << cazador->getVida() << std::endl;
		}
    }

	if (cazador->getVida() <= 0) {
		cout << "La Luna Superior ha ganado el combate." << endl;
	}
	else {
		cout << "El pilar ha ganado el combate." << endl;
	}
}

void menu() {
	int opcion;
	do {
		cout << "---MENU---\n";
		cout << "1) Crear Cazador \n";
		cout << "2) Crear Pilar \n";
		cout << "3) Crear Luna Superior \n";
		cout << "4) Imprimir Cazadores y Pilares\n";
		cout << "5) Imprimir Lunas Superiores\n";
		cout << "6) Simulacion\n";
		cout << "0) SALIR\n\n";

		cout << "Ingrese la Opcion a escoger: ";
		cin >> opcion;
		cout << endl << endl;

		switch (opcion) {
		case 1: { // Crear Cazador
			string nombre;
			cout << "Ingrese nombre de Cazador: ";
			cin >> nombre;
			Cazador* cazador = new Cazador(nombre);
			cazador->mostrarInformacion();
			cazadores.push_back(cazador);
		}
			  break;

		case 2: { // Crear Pilar
			string nombre;
			cout << "Ingrese nombre del Pilar: ";
			cin >> nombre;
			Pilar* pilar = new Pilar(nombre);
			pilar->mostrarInformacion();
			cazadores.push_back(pilar);
		}
			  break;

		case 3: { // Crear Luna Superior
			string nombre;
			cout << "Ingrese nombre de la Luna Superior: ";
			cin >> nombre;

			int pos;
			cout << "Ingrese la posicion de la Luna: ";
			cin >> pos;

			Luna_Superior* luna_superior = new Luna_Superior(nombre, pos);
			luna_superior->mostrarInformacion();
			lunas.push_back(luna_superior);
		}
			  break;

		case 4: { //Imprimir Cazadores y Pilares
			for (Cazador* cazador : cazadores) {
				cazador->mostrarInformacion();
				cout << endl;
			}
		}
			  break;

		case 5: { //Imprimir Lunas
			for (Luna_Superior* lunas_sup : lunas) {
				lunas_sup->mostrarInformacion();
				cout << endl;
			}
		}
			  break;

		case 6: {
			cout << "--Cazadores-- ";
			for (Cazador* cazador : cazadores) {
				cazador->mostrarInformacion();
				cout << endl;
			}
			int cazadorNum;
			cout << "\nCazador a seleccionar: ";
			cin >> cazadorNum;

			cout << "--Lunas--";
			for (Luna_Superior* lunas_sup : lunas) {
				lunas_sup->mostrarInformacion();
				cout << endl;
			}
			int lunasNum;
			cout << "\nLunas a seleccionar: ";
			cin >> lunasNum;

			simularCombate(cazadores[cazadorNum], lunas[lunasNum]);
		}
			  break;

		case 0: {
			for (Cazador* cazador : cazadores) {
				delete cazador;
			}

			for (Luna_Superior* lunas_sup : lunas) {
				delete lunas_sup;
			}
		}
			  break;
		}
	} while (opcion != 0);
}

int main() {
	menu();
	srand(time(0));
}
