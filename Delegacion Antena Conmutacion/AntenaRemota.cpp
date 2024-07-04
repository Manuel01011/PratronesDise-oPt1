#include"AntenaRemota.h"

AntenaRemota::AntenaRemota() {
	antenaPTR = new AntenaRemotaA;//cada vez que se crea una antena comenzara a trabajar como si fuera una antenaRemotaA
}

void AntenaRemota::f() {
	cout << "Aqui actua la antena escondida " << endl;
	antenaPTR->f();
}

void AntenaRemota::conmutarHaciaA() {
	delete antenaPTR; 
	antenaPTR = new AntenaRemotaA;
}

void AntenaRemota::conmutarHaciaB() {

	delete antenaPTR;  
	antenaPTR = new AntenaRemotaB;
}