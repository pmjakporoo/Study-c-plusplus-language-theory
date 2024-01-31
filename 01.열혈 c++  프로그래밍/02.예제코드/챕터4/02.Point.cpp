#include "Point.h"
#include <iostream>
using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0 || xpos > 100 || ypos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	else {
		x = xpos;
		y = ypos;
	}
	return true;
}

int Point::GetX() const {
	return x;
}

int Point::GetY() const {
	return y;
}

bool Point::SetX(int xpos) {
	if (xpos < 0 || xpos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	else {
		x = xpos;
		return true;
	}
}

bool Point::SetY(int ypos) {
	if (ypos < 0 || ypos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	else {
		y = ypos;
		return true;
	}
}
