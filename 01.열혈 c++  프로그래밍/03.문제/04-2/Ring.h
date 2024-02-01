#include <iostream>
using namespace std;

#ifndef RING_HEADER
#define RING_HEADER

#include "Circle.h"
#include "Point.h"

class Ring {
	Circle inner;
	Circle outer;
public:
	void Init(int x1, int y1, int rad1, int x2, int y2, int rad2) {
		inner.Init(x1, y1, rad1);
		outer.Init(x2, y2, rad2);
	}

	void ShowRingInfo() const {
		cout << "Inner Circle Info" << endl;
		inner.ShowCircleInfo();

		cout << "Outter Circle Info" << endl;
		outer.ShowCircleInfo();
	}
};
#endif
