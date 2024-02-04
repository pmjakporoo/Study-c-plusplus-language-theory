#include <iostream>
using namespace std;

class Base {
	int num1;
protected: 
	int num2;
public:
	int num3;
	
	Base() : num1(1), num2(2), num3(3) {}
};

class Derived : protected Base {

};

int main(void) {
	Derived drv;
	cout << drv.num3 << endl; // 컴파일 에러 발생! num3이 protected로 변하여 클래스 외부에서 접근 불가하다.
	return 0;
}
