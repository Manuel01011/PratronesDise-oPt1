#include"Combo.h"
#include"Hamburguesa.h"
#include"Ingredientes.h"
#include"Queso.h"
#include"Tomate.h"
#include"TortaDeCarne.h"

int main() {

	cout << "Creando una intefaz de usurio " << endl << endl;

	//creando combo basico
	Combo* hamburguesa1 = new Hamburguesa();

	//creando e ingresando la torta de carne 
	Combo* tortaCarne = new TortaCarne(hamburguesa1);

	//creando e ingresando un tomate 
	Combo* tomate1 = new Tomate(tortaCarne);

	//creando e ingresando queso 
	Combo* queso1 = new Queso(tomate1);

	//etc etc

	cout << "La informacion de su amburguesa es: " << queso1->tostring() << endl;
	cout << "El costo total es de: " << queso1->costo() << endl;

	system("pause");
	return 0;
}