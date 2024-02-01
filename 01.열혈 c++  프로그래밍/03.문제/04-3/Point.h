#include <iostream>
using namespace std;

#ifndef POINT_HEADER
#define POINT_HEADER

class Point {
	int xpos, ypos;

public:
	//void Init(int x, int y) {
	//	xpos = x,
	//		ypos = y;
	//}
	Point(int x, int y) :xpos(x), ypos(y) {}

	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};
#endif
