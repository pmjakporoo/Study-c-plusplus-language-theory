#include <iostream>
using namespace std;

void Counter() {
	static int count; // static 변수는 전역변수와 마찬가지로 초기화 하지 않으면 0으로 초기화된다.
	count++;
	cout << "Current count: " << count << endl;
}

int main(void) {
	for (int i = 0; i < 10; i++) {
		Counter();
	}
	return 0;
}
