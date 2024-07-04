#include "ColeccionArreglo.h"

ColeccionArreglo::ColeccionArreglo(int tam){
	tamano = tam;
	cantidad = 0;
	vec = new ObjetoBase * [tam];
	Coleccion; //constructor de la clase es mas elegante
}

ColeccionArreglo::~ColeccionArreglo(){
	delete[] vec;
}

void ColeccionArreglo::agregar(ObjetoBase* obj){
	if (cantidad < tamano) {//si se puede agregar si es <
		vec[cantidad++] = obj; //como usamos el cost debe hacer y asegurar que sea un objeto base de la siguiente manera

	}
}

ObjetoBase* ColeccionArreglo::obtener(int pos) const{
	if (pos >= 0 && pos < cantidad) {
		return vec[pos];
	}
	return nullptr;
}

int ColeccionArreglo::MaxElemntos() const{
	return tamano; //seria el tamano del vector
}

int ColeccionArreglo::numeroElementos() const{
	return cantidad; //este seria el numero de elemntos validos en el vetor
}

bool ColeccionArreglo::estaVacio() const{
	return (cantidad == 0);
}

Iterador* ColeccionArreglo::obtenerIterador() const{

	return new IteradorArreglo(cantidad,vec);
}

string ColeccionArreglo::tostring() const{
	stringstream c;

	c << "-----Listado-----" << endl<<endl;
	c << "[";
	Iterador* i = obtenerIterador(); //iterador para coleccion Arreglo

	while (i->masElementos()){
		c << (i->proximoElemento())->tostring()<<", "<<endl;
		if (i->masElementos());
		//fin del while
	}
	delete i;
	c << "]";

	return c.str();
}
