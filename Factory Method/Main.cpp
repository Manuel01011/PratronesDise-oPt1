#include"manejadorVehiculos.h"
#include"CreadorMoto.h"
#include"creadorAuto.h"

int main() {

	int op;

	cout << "-----------Ejemplo de factory method-----------" << endl << endl;;

	Vehiculo* vehiculo1 = nullptr;
	creadorVehiculo* creador1 = nullptr;
	ManejadorVehiculo* manejador1 = new ManejadorVehiculo(); //factory

	cout << "---------Creando algun vehiculo---------" << endl;
	cout << "(1) Motocicleta " << endl;
	cout << "(2) Automovil " << endl;
	cout << "(3) Salir " << endl;
	cout << "-----------------------------------------" << endl;
	cout << "Digite su opcion: ";
	cin >> op;
	cout << endl;

	switch (op){
	case 1: {
		creador1 = new CreadorMoto();
		break;
	}
	case 2: {
		creador1 = new CreadorAuto();
		break;
	}
	case 3: {
		cout << "GRACIAS POR SU VISITA" << endl;
		break;
	}
	default:
		cout << "Opcion incorrecta, Intentalo de nuevo " << endl;
		break;
	}
	manejador1->setCreador(creador1);
	manejador1->creaVehiculo();
	vehiculo1 = manejador1->getVehiculo();

	if (vehiculo1 != nullptr) {
		vehiculo1->printVehiculo();
	}else {
		cout << "No se pudo crear su vehiculo" << endl;
	}

	system("pause");
	system("cls");
	return 0;
}