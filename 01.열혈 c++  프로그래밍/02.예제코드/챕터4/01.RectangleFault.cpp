#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;
};

class Rectangle {

public:	
	Point upLeft;
	Point lowRight;

	void ShowRecInfo() {
		cout << "좌 상단" << '[' << upLeft.x << ',' << upLeft.y << ']' << endl;
		cout << "우 하단" << '[' << lowRight.x << ',' << lowRight.y << ']' << endl;
	}
};
int main(void) {
	Point pos1 = { -2, 4 }; // Point의 멤버변수가 public이기 때문에 클래스의 외부에서 초기화가 가능하다.
	Point pos2 = { 5, 9 };

	Rectangle rec = { pos2, pos1 }; // Rectangle의 멤버변수가 public이기 때문에 클래스의 외부에서 초기화가 가능하다.
	rec.ShowRecInfo();
	return 0;
}
