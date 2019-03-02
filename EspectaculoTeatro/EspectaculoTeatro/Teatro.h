#pragma once
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Teatro // 1 Clase 
{
public: //Metodos
	Teatro();//constructor de la 1 clae.
	Teatro(char *z, int *nP, double *pN, double *pA);
	bool buscarZona(char zo[30]);
	~Teatro() {};//Destructor.
	void crearTeatro();

	//Retorno get de los atributos.
	char	*getZona() { return zona; }
	int		*getNumeroPuestos() { return numeroPuestos; }
	double	*getPrecioNormal() { return precioNormal; }
	double	*getPrecioAbonado() { return precioAbonado; }

protected: // Atributos
	char *zona;
	int *numeroPuestos;
	double *precioNormal;
	double *precioAbonado;
};

