/*
Hecho por Diego Parra.
Programa que gestiona venta de entradas para un espectáculo en un teatro con sus respectivas zonas:

Nombre Zona    Número de Puestos   Precio Normal	Precio Abonado
Principal		200					25€				17.5€
Palco			40					70€				40€
Central			400					20€				14€
Lateral			100					15.5€			10€
*/


#include "stdafx.h"
#include "Tiquetera.h"

int main()
{
	// SE INSTANCIA OBJETOS DE LAS CLASES

	Teatro *te[20];
	Tiquetera *tq[20];

	char nombreZona[30];
	int identificacion;
	double precio = 0;
	int opcion;
	int i = 0;
	int j = 0;
	int t = 0;
	do
	{
		//MENU
		system("cls");
		cout << "\n\t\t***ESPECTACULO TEATRO***\n" << endl;
		cout << " 1. Insertar Teatro." << endl;
		cout << " 2. vender Entrada." << endl;
		cout << " 3. Consultar Entrada." << endl;
		cout << " 4. Informe Zona." << endl;
		cout << " 5. Salir.\n" << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			//INSERTAR
			cin.ignore();
			system("cls");
			cout << "\n\t\t---INSERTAR---\n" << endl;
			te[i] = new Teatro;
			te[i]->crearTeatro();
			i++;
			break;
		case 2:
			//VENDER
			cin.ignore();
			system("cls");
			cout << "\n\t\t---VENDER---\n" << endl;
			cout << "Ingrese la zona del teatro: ";
			cin.getline(nombreZona, 30);
			for (t = 0; t < i; t++)
			{
				if (te[t]->buscarZona(nombreZona))
				{
					tq[j] = new Tiquetera;
					tq[j]->crearVenta();
					j++;
					break;
				}
			}
			if (t == i)
			{
				cout << "\nNo Existe tal Zona." << endl;
				system("pause");
			}
			break;
		case 3:
			cin.ignore();
			system("cls");
			cout << "\n\t\t---CONSULTAR---\n" << endl;
			cout << "Ingrese la identificacion de la entrada: ";
			cin >> identificacion;
			for (t = 0; t < i; t++)
			{
				if (tq[t]->buscarEntrada(identificacion))
				{
					system("cls");
					cout << " \t\t***Tiquete para el teatro ", cout << te[t]->getZona() << " ***\n\n";
					tq[t]->imprimirTiquete();
					if (strcmp(tq[t]->getTipoEntrada(), "beneficiario") == 0)
					{
						double total;
						precio =(*te[t]->getPrecioNormal() * 0.15);
						total = (*te[t]->getPrecioNormal()) - precio;
						cout << "\nEl precio de su tiquete es: " << total << ".";
					}
					else if (strcmp(tq[t]->getTipoEntrada(), "abonado") == 0)
					{
						precio = *te[t]->getPrecioAbonado();
						cout << "\nEl precio de su tiquete es: " << precio << ".";
					}
					else
					{
						precio = *te[t]->getPrecioNormal();
						cout << "\nEl precio de su tiquete es: " << precio << ".";
					}
					system("pause");
					break;
				}
			}
			if (t == i)
			{
				cout << "\nNo Existe tal identificacion." << endl;
				system("pause");
			}
			break;
		case 4:
			break;
		default:
			cout << " Opcion no valida" << endl;
			system("pause");
		}
	} while (opcion != 5);
	return 0;
}

