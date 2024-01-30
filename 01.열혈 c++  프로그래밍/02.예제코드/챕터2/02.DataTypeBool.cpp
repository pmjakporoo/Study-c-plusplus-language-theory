#include <iostream>

using namespace std;

bool IsPositive(int num) {
	return (num > 0) ? true : false;
}

int main(void) {
	bool isPos;
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos) {
		cout << "Positive Number" << endl;
	}
	else {
		cout << "Negative Number" << endl;
	}
	return 0;
}
