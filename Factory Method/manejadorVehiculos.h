#pragma once
#include"Vehiculo.h"
#include"CreadorVehiculo.h"

//manejador de vehiculos

class ManejadorVehiculo {
private:
	Vehiculo* PTRvehiculo;
	creadorVehiculo* PTRCreador;
public:
	void setCreador(creadorVehiculo* _PTRcreador);
	void creaVehiculo();
	Vehiculo* getVehiculo();

};