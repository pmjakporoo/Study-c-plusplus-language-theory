#include "Car.h"
#ifndef HYBRIDCAR_HEADER
#define HYBRIDCAR_HEADER

class HybridCar : public Car {
	int electricGauge;
public:
	HybridCar() : Car(0), electricGauge(0) {}
	HybridCar(int mygasolineGauge, int myelectricGauge):
		Car(mygasolineGauge), electricGauge(myelectricGauge) {}
	int GetElecGauge() {
		return electricGauge;
	}
};
#endif
