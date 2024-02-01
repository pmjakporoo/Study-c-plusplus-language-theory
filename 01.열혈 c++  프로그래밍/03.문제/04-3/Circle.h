#ifndef CIRCLE_HEADER
#define CIRCLE_HEADER

#include "Point.h"

class Circle {
	Point center;
	int rad;

public:
	//void Init(int x1, int y1, int rad1) {
	//	center.Init(x1, y1);
	//	rad = rad1;
	//}
	Circle(int x1, int y1, int rad1) :center(x1, y1), rad(rad1) {}

	void ShowCircleInfo() const {
		center.ShowPointInfo();
		cout << "반지름 : " << rad << endl;
	}
};
#endif
