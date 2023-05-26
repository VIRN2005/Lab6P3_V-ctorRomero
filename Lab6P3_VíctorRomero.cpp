#include <iostream>
#include <ctime>
#include <string>
#include "Cazador.h"
#include "Pilar.h"
#include "Luna_Superior.h"
using namespace std;

void simularCombate(Cazador* cazador, Luna_Superior* lunaSuperior) {
    cout << "¡Comienza el combate!" << endl;
    cout << "Cazador:" << endl;
    cazador->mostrarInformacion();
    cout << "Luna Superior:" << endl;
    lunaSuperior->mostrarInformacion();

    bool turnoCazador = true;
}

void menu() {
    int opcion;
    do {
        cout << "---MENU---\n";
        cout << "1) Crear Cazador \n";
        cout << "2) Crear Pilar \n";
        cout << "3) Crear Luna Superior \n";
        cout << "Ingrese la Opcion a escoger: ";
        cin >> opcion;
        cout << endl << endl;

        switch (opcion) {
        case 1: { // Crear Cazador
            string nombre;
            cout << "Ingrese nombre de Cazador: ";
            cin >> nombre;
            Cazador cazador(nombre);
            cazador.mostrarInformacion();
        }
              break;

        case 2: { // Crear Pilar
            string nombre;
            cout << "Ingrese nombre del Pilar: ";
            cin >> nombre;
            Pilar pilar(nombre);
            pilar.mostrarInformacion();
        }
              break;
        }
    } while (opcion != 0);
}

int main() {
    srand(time(0));
    menu();
}
