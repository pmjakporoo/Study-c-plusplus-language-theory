#include "PntAdder.h"

Point& PntAdder(const Point& p1, const Point& p2) {
	Point * addResult = new Point;
	addResult->xpos = p1.xpos + p2.xpos;
	addResult->ypos = p1.ypos + p2.ypos;
	
	return *addResult;
}
