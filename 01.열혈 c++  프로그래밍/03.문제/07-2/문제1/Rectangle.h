#ifndef RECTANGLE_HEADER
#define RECTANGLE_HEADER

#include <iostream>
using namespace std;

class Rectangle {
	int width;
	int height;

public:
	Rectangle(int inputWidth, int inputHeight):
		width(inputWidth), height(inputHeight) {}

	void ShowAreaInfo() const {
		cout << "면적: " << width * height << endl;
	}
};
#endif
