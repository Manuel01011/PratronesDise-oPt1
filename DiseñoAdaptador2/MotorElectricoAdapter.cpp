#include "MotorElectricoAdapter.h"

MotorElectricoAdpater::MotorElectricoAdpater(MotorElectrico* ptr){
	MotorElectricoPTR = ptr;
	cout << "Creando Motor Electrico Adapter" << endl;
}

void MotorElectricoAdpater::encedner(){
	cout << "Encendiendo motor electrico adapater" << endl;
	MotorElectricoPTR->activar();
	MotorElectricoPTR->conectar();
}

void MotorElectricoAdpater::acelerar(){
	cout << "Acelerando motor electrico adapater" << endl;
	MotorElectricoPTR->MoverMasRapido();
}

void MotorElectricoAdpater::apagar(){
	cout << "Apagando motor electrico adapater" << endl;
	MotorElectricoPTR->detener();
	MotorElectricoPTR->desconectar();
}
