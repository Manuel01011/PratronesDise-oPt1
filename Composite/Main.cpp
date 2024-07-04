#include"Caracter.h"
#include"Dibujo.h"
#include"Frase.h"
#include"Oracion.h"

int main() {

	cout << "-----------Composite------------" << endl<<endl;
	cout << "-----------Creando caracteres----------- " << endl;
	Componente* caracter1 = new Caracter("_", 50);
	Componente* caracter2 = new Caracter("*", 40);
	Componente* caracter3 = new Caracter("?", 30);
	Componente* caracter4 = new Caracter("!", 20);
	Componente* caracter5 = new Caracter("!=", 10);
	cout << endl;

	cout << "----------Creando dibujos-----------" << endl;
	Componente* dibujo1 = new Dibujo("Cuadrado", 10);
	Componente* dibujo2 = new Dibujo("Circulo", 20);
	Componente* dibujo3 = new Dibujo("Elipse", 30);
	Componente* dibujo4 = new Dibujo("Rectangulo", 40);
	Componente* dibujo5 = new Dibujo("Rumbo", 50);
	cout << endl;
	
	cout << "----------Creancion de frases-----------" << endl;
	Componente* frase1 = new Frase("Frase Inicial",100);
	Componente* frase2 = new Frase("Frase Final", 100);
	Componente* Oracio1 = new Oracion("Oracion",200);
	cout << endl;

	frase1->agregarComponente(caracter1);
	frase1->agregarComponente(caracter2);
	frase1->agregarComponente(caracter3);

	cout << frase1->tostring() << endl<<endl;

	cout << "El valor de la 'frase1' es: " << frase1->obtenerPrecio() << endl<<endl;
	cout << "------------------------------------" << endl;

	frase2->agregarComponente(dibujo1);
	frase2->agregarComponente(dibujo2);
	frase2->agregarComponente(dibujo3);
	frase2->agregarComponente(caracter4);
	cout << frase2->tostring() << endl;
	cout << "El valor de la 'frase2' es: " << frase2->obtenerPrecio() << endl << endl;

	system("pause");
	return 0;
}