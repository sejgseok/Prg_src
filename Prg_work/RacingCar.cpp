#include <iostream>
using namespace std;

#define ID_LEN	20
#define MAX_SPD	200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP 	10

struct Car
{
	char gamerID[ID_LEN];   //소유자id
	int fuelGauge;
	int curSpeed;
}

void ShowCarState(const Car &car)
{
	cout << "소유자 ID: "<< car.gamerID << endl;
	cout << "연료량: " << car.fuelGauge << "%" << endl;
	cout << "현재속도 : "<< car.curSpeed << "km/s" << endl;
}

void Accel(Car &car)
{
	if (car.fuelGau <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;
		
