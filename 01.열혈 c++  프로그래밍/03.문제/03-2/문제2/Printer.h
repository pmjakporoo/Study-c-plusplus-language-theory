#ifndef PRINTER_HEADER
#define PRINTER_HEADER
#include <iostream>
#include <cstring>

using namespace std;
class Printer {
	char str[30];

public:
	void SetString(const char* inputChar) {
		strcpy(str, inputChar);
	}

	void ShowString() {
		cout << str << endl;
	}
};
#endif
