#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(const Point& upl, const Point& lowR) : upLeft(upl), lowRight(lowR) {

}

void Rectangle::ShowRecInfo() const {
	cout << "좌상단 : " << '[' << upLeft.GetX() << " , " << upLeft.GetY() << ']' << endl;
	cout << "우하단 : " << '[' << lowRight.GetX() << " , " << lowRight.GetY() << ']' << endl << endl;
}
