#include "PntAdder.h"
#include <iostream>

using namespace std;

int main(void) {
	Point* p1 = new Point;
	Point* p2 = new Point;
	
	p1->xpos = 2;
	p1->ypos = 4;

	p2->xpos = 6;
	p2->ypos = 8;


	Point *result = &PntAdder(*p1, *p2);
	cout << result->xpos << ',' << result->ypos << endl;

	delete p1;
	delete p2;
	delete result;
	return 0;
}
