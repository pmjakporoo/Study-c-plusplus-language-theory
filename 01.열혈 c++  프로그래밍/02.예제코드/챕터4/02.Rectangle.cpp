#include "Rectangle.h"
#include <iostream>

using namespace std;

bool Rectangle::InitMembers(const Point& upl, const Point& lowR) {
	if (upl.GetX() >= lowR.GetX() || upl.GetY() <= lowR.GetY()) {
		cout << "잘못된 위치 정보 전달" << endl;
		return false;
	}
	else {
		upLeft.SetX(upl.GetX());
		upLeft.SetY(upl.GetY());

		lowRight.SetX(lowR.GetX());
		lowRight.SetY(lowR.GetY());
		return true;
	}
}

void Rectangle::ShowRecInfo() const{
	cout << "좌상단 : " << '[' << upLeft.GetX() << " , " << upLeft.GetY() << ']' << endl;
	cout << "우하단 : " << '[' << lowRight.GetX() << " , " << lowRight.GetY() << ']' << endl << endl;
}
