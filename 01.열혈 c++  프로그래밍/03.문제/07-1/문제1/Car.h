#ifndef CAR_HEADER
#define CAR_HEADER

class Car {
	int gasolineGauge;

public:
	Car() : gasolineGauge(0) {}
	Car(int mygasolineGauge) : gasolineGauge(mygasolineGauge) {}
	int GetGasGauge() {
		return gasolineGauge;
	}
};

#endif
