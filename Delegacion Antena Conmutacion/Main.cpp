#include"AntenaRemota.h"

int main() {

	AntenaRemota* remota = new AntenaRemota(); //Remota juega de antena remota A 
	remota->f();
	cout << endl;

	cout << "Ahora cambiamos de antena (cambiando de canal de trasmision)" << endl << endl;

	remota->conmutarHaciaB();
	remota->f();


	system("pause");
	return 0;
}