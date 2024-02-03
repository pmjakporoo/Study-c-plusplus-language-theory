#include <iostream>
#include "HybridCar.h"
#ifndef HYBRIDWATERCAR_HEADER
#define HYBRIDWATERCAR_HEADER

using namespace std;

class HybridWaterCar: public HybridCar {
	int waterGauge;
public:
	HybridWaterCar() : HybridCar(0, 0), waterGauge(0) {}
	HybridWaterCar(int mygasolineGauge, int myelectricGauge, int mywaterGauge):
		HybridCar(mygasolineGauge, myelectricGauge), waterGauge(mywaterGauge) {
	}
	void ShowCurrentGauge() {
		cout << "잔여 가솔린: " << GetGasGauge() << endl;
		cout << "잔여 전기량: " << GetElecGauge() << endl;
		cout << "잔여 워터량: " << waterGauge << endl;
	}
};
#endif
