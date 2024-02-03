#include "HybridWaterCar.h"

#include <iostream>
int main(void) {
	HybridWaterCar car1;
	car1.ShowCurrentGauge();

	HybridWaterCar car2(10,20,30);
	car2.ShowCurrentGauge();
	return 0;
}
