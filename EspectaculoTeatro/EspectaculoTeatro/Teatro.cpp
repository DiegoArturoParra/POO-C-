#include "stdafx.h"
#include "Teatro.h"

Teatro::Teatro()
{
	//Inicializacion de los atributos con punteros.
	zona = new char[30];
	numeroPuestos = new int;
	precioNormal = new double;
	precioAbonado = new double;
}

Teatro::Teatro(char *z, int *nP, double *pN, double *pA)
{
	//Asignamos variables a nuestros atributos. 
	zona = z;
	numeroPuestos = nP;
	precioNormal = pN;
	precioAbonado = pA;
}

bool Teatro::buscarZona(char zo[30])
{
	if (strcmp(zo, zona) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Teatro::crearTeatro()// Metodo para crear las caracteristicas del teatro: zona, numero de puestos, precio normal y precio abonado del tiquete.
{
	cout << "Ingrese el nombre de la zona del teatro: ";
	cin.getline(zona, 30);
	cout << "\nIngrese los numeros de puestos que tiene el teatro de la zona " << zona << ": ";
	cin >> *numeroPuestos;
	cout << "\nIngrese el precio normal del tiquete del teatro: ";
	cin >> *precioNormal;
	cout << "\nIngrese el precio abonado del tiquete del teatro: ";
	cin >> *precioAbonado;
}




