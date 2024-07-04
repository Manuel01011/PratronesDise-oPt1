#include"Logaritmo.h"

double Logaritmo(const double n); //prototipo


int main() {

	double num;
	bool f = true;

	do {
		cout << "<-----Logaritmo en base 10------>" << endl<<endl;
		cout << "Ingrese el numero que desea saber su logaritmo " << endl;
		cin >> num;

		try{
			cout << "El resultado es: " << Logaritmo(num) << endl;
			f = false;
		}
		catch (ErrorMatematico& e){
			cout << "Se encontro un error" << endl;
			cout << e.porque();

		}

	} while (f = false);


	cout << endl;
	return 0;
}


double Logaritmo(const double n) {

	double resultado;

	if (n == 0) {
		throw ErrorMatematico(100);
	}
	if (n < 0) {
		throw ErrorMatematico(101);
	}
	//si no resulve el logaritmo
	return resultado = log(n) / log(10);
}