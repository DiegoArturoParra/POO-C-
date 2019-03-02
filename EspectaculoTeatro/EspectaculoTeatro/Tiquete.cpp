#include "stdafx.h"
#include "Tiquete.h"

Tiquete::Tiquete()//Constructor
{
	//Inicializacion de los atributos con punteros.
	nombreEspectador = new char[30];
	tipoEntrada = new char[30];
	idEntrada = new int;

}

bool Tiquete::buscarEntrada(int idEntra)
{
	if (idEntra == *idEntrada)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Tiquete::Tiquete(char *nE, char *tE, int *idE)
{
	//Asignamos variables a nuestros atributos. 
	nombreEspectador = nE;
	tipoEntrada = tE;
	idEntrada = idE;
}
