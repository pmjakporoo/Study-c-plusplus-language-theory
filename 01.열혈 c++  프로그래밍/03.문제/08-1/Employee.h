#ifndef EMPLOYEE_HEADER
#define EMPLOYEE_HEADER

#include <iostream>
using namespace std;

class Employee {
	char name[100];
public:
	Employee(const char* name) {
		strcpy(this->name, name);
	}
	void ShowYourName() const {
		cout << "name: " << name << endl;
	}
	virtual void ShowSalaryInfo() const = 0;
	virtual int GetPay() const = 0;
};
#endif
