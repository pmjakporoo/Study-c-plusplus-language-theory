#include <iostream>
using namespace std;
class SoSimple {
	int num;
public:
	SoSimple(int n) :num(n) {}
	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}
	void SimpleFunc() {
		cout << "SimpleFunc: " << num << endl;
	}

	void SimpleFunc() const {
		cout << "const simplefunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj) {
	// YourFunc 함수는 전달되는 인자를 참조자로, const 참조자로 받는다.
	// 따라서 참조자를 이용한 함수호출의 결과로 SimpleFunc() const 함수가 호출된다. 
	obj.SimpleFunc();
}
int main(void) {
	SoSimple obj1(2);
	const SoSimple obj2(7);
	
	obj1.SimpleFunc(); // SimpleFunc(); 실행
	obj2.SimpleFunc(); // SimpleFunc() const; 실행

	YourFunc(obj1); // SimpleFunc() const; 실행
	YourFunc(obj2); // SimpleFunc() const; 실행
	return 0;
}
