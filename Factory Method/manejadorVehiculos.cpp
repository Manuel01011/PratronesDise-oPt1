#include "manejadorVehiculos.h"

void ManejadorVehiculo::setCreador(creadorVehiculo* _PTRcreador){
	PTRCreador = _PTRcreador;
}

void ManejadorVehiculo::creaVehiculo(){
	PTRvehiculo = PTRCreador->creaVehiculo();
}

Vehiculo* ManejadorVehiculo::getVehiculo(){
	return PTRvehiculo;
}
