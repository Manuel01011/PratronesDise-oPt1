#include"ColeccionArreglo.h"
#include"ColeccionLista.h"
#include"IteradorArreglo.h"
#include"IteradorLista.h"
#include"Persona.h"

int main() {

	cout << "----Objeto base----" << endl;
	cout << "-------------------" << endl<<endl;

	cout << "----Creacion de personas----" << endl<<endl;
	//todo debe ser objeto base
	ObjetoBase* per1 = new Persona("Manuel", "1191506");
	ObjetoBase* per2 = new Persona("Leonel", "1788273");
	ObjetoBase* per3 = new Persona("Jurytza", "128983");
	ObjetoBase* per4 = new Persona("Joseph", "309989");
	ObjetoBase* per5 = new Persona("Dayron", "792933");

	cout << "----Creacion de un contenedor tipo arreglo----" << endl<<endl;
	int tamano = 10;
	ColeccionArreglo* coleccion = new ColeccionArreglo(tamano);

	cout << "Ingresando a las personas al contenedor tipo arreglo " << endl;
	coleccion->agregar(per1);
	coleccion->agregar(per2);
	coleccion->agregar(per3);
	coleccion->agregar(per4);
	coleccion->agregar(per5);

	cout << "Impriminedo a las personas del contenedor tipo arreglo " << endl;
	cout << coleccion->tostring() << endl << endl;

	system("pause");
	system("cls");
	return 0;
}