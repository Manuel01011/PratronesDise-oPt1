#include"MotorEconomico.h"
#include"MotorGaston.h"
#include"MotorElectricoAdapter.h"
#include"MotorElectrico.h"


int main() {
	bool ecendido = true;

	Motor* motor1 = new MotorEconomico();
	Motor* motor2 = new MotorGaston();
	MotorElectrico* motor3 = new MotorElectrico();
	Motor* motor33 = new MotorElectricoAdpater(motor3);

	cout << endl << endl;
	motor1->encedner();
	motor1->acelerar();
	motor1->apagar();
	cout << endl << endl;

	motor2->encedner();
	motor2->acelerar();
	motor2->apagar();
	cout << endl << endl;

	motor33->encedner();
	motor33->acelerar();
	motor33->apagar();

	system("pause");
	return 0;
}