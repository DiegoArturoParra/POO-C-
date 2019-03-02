#pragma once
#include "Teatro.h"
#include "Tiquete.h"
class Tiquetera :
	public Teatro, public Tiquete // Heredamos las clases teatro y tiquete.
{
public:
	Tiquetera(); // Constructor de la subclase que hereda de las clases teatro y tiquete.
	Tiquetera(string *date, /*Atributos de la clase Teatro*/ char *z, int *nP, double *pN, double *pA, /*Atributos de la clase Tiquete*/ char *nE, char *tE, int *idE) :Teatro(z, nP, pN, pA), Tiquete(nE, tE, idE)
	{
		fecha = date;
	}
	~Tiquetera() {};// Destructor
	void crearVenta(); // El vendedor crea la venta para el espectador.
	void imprimirTiquete();//Imprimimos tiquete
private:
	string *fecha;
};

