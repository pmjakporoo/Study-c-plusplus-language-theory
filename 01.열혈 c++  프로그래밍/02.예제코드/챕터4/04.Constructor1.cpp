#include <iostream>
using namespace std;

class SimpleClass {
	int num1;
	int num2;

public:
	SimpleClass() { // 생성자의 매개변수에 값이 없을 때
		num1 = 0;
		num2 = 0;
	}

	SimpleClass(int n) { // 생성자의 매개변수에 값이 1개 있을 때
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2) {  // 생성자의 매개변수에 값 2개 있을 때
		num1 = n1;
		num2 = n2;
	}

/*
 *	위에 만들어진 세 개의 생성자를 아우르는 생성자 
	SimpleClass(int n1 = 0, int n2 = 0) { 
		num1 = n1;
		num2 = n2;
	}	
*/
	void ShowData() const {
		cout << num1 << ' ' << num2 << endl;
	}
};
