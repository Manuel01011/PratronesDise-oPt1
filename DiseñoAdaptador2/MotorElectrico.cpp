#include "MotorElectrico.h"

MotorElectrico::MotorElectrico(){
	cout << "****************************" << endl;
	cout << "**Creando Motor electrico**" << endl;
	cout << "****************************" << endl;
	conectado = false;
}

void MotorElectrico::conectar(){
	cout << "Conectando motor electrico" << endl;
	conectado = true;
}

void MotorElectrico::activar(){
	if (!conectado) {
		cout << "No se puede activar porque no esta conectado al motor electrico" << endl;
	}
	else {
		cout << "Activando motor electrico " << endl;
	}
}

void MotorElectrico::MoverMasRapido(){
	if (!conectado) {
		cout << "No se puede mover mas rapido ya que no esta conectado" << endl;
	}
	else {
		cout << "Moviendose mas rapido y aumentando voltaje" << endl;
	}
}

void MotorElectrico::detener(){
	if (!conectado) {
		cout << "No se puede detener porque no esta conectado" << endl;

	}
	else {
		cout << "Deteniendo el motor electrico " << endl;
	}
	
}

void MotorElectrico::desconectar(){
	cout << "Desconectando el motor electrico" << endl;
	conectado = false;
}
