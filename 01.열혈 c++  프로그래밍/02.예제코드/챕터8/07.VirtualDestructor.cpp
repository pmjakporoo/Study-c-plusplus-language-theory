#include <iostream>
using namespace std;

class First {
	char* strOne;
public:
	First(const char* str) {
		strOne = new char[strlen(str) + 1];
	}
	~First() {
		cout << "~First()" << endl;
		delete[] strOne;
	}
};

class Second : public First {
	char* strTwo;

public:
	Second(const char* str1, const char* str2) : First(str1) {
		strTwo = new char[strlen(str2) + 1];
	}
	~Second() {
		cout << "~Second()" << endl;
		delete[] strTwo;
	}
};

int main(void) {
	First* ptr = new Second("Simple", "conplex");
	delete ptr;
	return 0;
}
