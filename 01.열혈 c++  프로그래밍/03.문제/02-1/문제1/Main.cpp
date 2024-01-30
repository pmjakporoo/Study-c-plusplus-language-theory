#include <iostream>
#include "AddOne.h"
#include "ChangeSign.h"

using namespace std;



int main(void) {
	int num = 10;

	AddOne(num);
	cout << num << endl;

	ChangeSign(num);
	cout << num << endl;

	return 0;
}
