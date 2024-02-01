#ifndef RECTANGLE_HEADER
#define RECTANGLE_HEADER

#include "Point.h"

class Rectangle {
	Point upLeft;
	Point lowRight;

public:
	Rectangle(const Point& upl, const Point& lowR);
	void ShowRecInfo() const;
};
#endif
