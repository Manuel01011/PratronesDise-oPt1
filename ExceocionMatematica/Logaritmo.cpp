#include "Logaritmo.h"

ErrorMatematico::ErrorMatematico(int _m){
	motivo = _m;
}

const char* ErrorMatematico::porque()const throw() {

	switch (motivo){
	case 100: {
		return "Error de dominio ";//se quiuzo obtener un logaritmo de 0
		
	}
	case 101: {
		return "Error ingreso un numero negativo "; //se quiso obtener el logaritmo de un valor negativo 

	}
	default:
		break;
	}
}