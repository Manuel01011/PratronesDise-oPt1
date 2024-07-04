#pragma once
#include<iostream>
#include<sstream>
#include<cmath>//asuntos matematicos 

using namespace std;

//en c++ existe una manera de declarar indetificaciones costantes...

#define ERRORDOMINIO 100 //aqui hay un error de dominio (x=0 si el x vale o se le asigna un 0)
#define ERRORRANGO 101 //aqui hay un error de rango (es el caso de que x no sea negativo)

//la desventaja de usar un #define es que no tiene tipo de dato

class ErrorMatematico {

private:

	int motivo;

public:

	ErrorMatematico(int _m);

	const char* porque() const throw();

};
