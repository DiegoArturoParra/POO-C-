#pragma once
#include "Teatro.h"
class Tiquete
{
public: //Metodos
	Tiquete(); //Constructor de segunda clase que asocia a la clase teatro.
	Tiquete(char *nE, char *tE, int *idE);
	~Tiquete() {} //Destructor de segunda clase que asocia a la clase teatro.
	bool buscarEntrada(int idEntra);//Metodo que busca el id de la entrada para imprimir el tiquete del teatro que compro el espectador.

									// retorno get de los atributos.
	char *	getNombreEspectador() { return nombreEspectador; }
	char *	getTipoEntrada() { return tipoEntrada; }
	int	*	getIdEntrada() { return idEntrada; }

protected: //Atributos
	int	*idEntrada;
	char * nombreEspectador;
	char *tipoEntrada;
};

