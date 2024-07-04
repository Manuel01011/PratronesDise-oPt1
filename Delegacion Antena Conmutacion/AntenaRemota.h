#pragma once
#include"Antena.h"
#include"AntenaB.h"
#include"AntenaA.h"

// La sugiente clase tiene un interruptor de delegado para la antena remota - A o  antena remota - B

class AntenaRemota:public Antena {

private:
	Antena* antenaPTR; //cualquiera de las dos antenas se pueden poner ahi

public:

	AntenaRemota();

	void f();

	void conmutarHaciaA();

	void conmutarHaciaB();
};