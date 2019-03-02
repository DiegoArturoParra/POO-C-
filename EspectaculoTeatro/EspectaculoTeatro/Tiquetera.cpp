#include "stdafx.h"
#include "Tiquetera.h"

Tiquetera::Tiquetera()
{
	//Inicializacion de los atributos con punteros.
	fecha = new string;
}

void Tiquetera::imprimirTiquete() // El vendedor imprime el tiquete de la persona dependiendo del id.
{
	cout << "------fecha: " << *fecha << endl;
	cout << "-----Id: " << *idEntrada << endl;
	cout << "-----Espectador: " << nombreEspectador << endl;
	cout << "-----tipo: " << tipoEntrada << endl;
}

void Tiquetera::crearVenta() // metodo de la subclase para que el vendedor cree la venta.
{
	cout << "\nIngrese la fecha: ";
	getline(cin, *fecha);
	cout << "\nIngrese el id de la entrada: ";
	cin >> *idEntrada;
	cin.ignore();
	cout << "\nIngrese el nombre del espectador: ";
	cin.getline(nombreEspectador, 20);
	cout << "\nIngrese el tipo de entrada (beneficiario, normal o abonado): ";
	cin.getline(tipoEntrada, 20);
}


