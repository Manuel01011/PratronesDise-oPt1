#include"ColeccionArreglo.h"
#include"Juegos.h"

int main() {

	Juegos* juego1 = new Juegos("San Adreas", "Play Station");
	Juegos* juego2 = new Juegos("Zelda", "Nintendo");
	Juegos* juego3 = new Juegos("Halo", "Xbox");
	Juegos* juego4 = new Juegos("Counter Strike", "PC");

	ColeccionArreglo* coleccion1 = new ColeccionArreglo(10);

	coleccion1->agregar(juego1);
	coleccion1->agregar(juego2);
	coleccion1->agregar(juego3);
	coleccion1->agregar(juego4);

	cout << coleccion1->tostring() << endl;

	return 0;
}