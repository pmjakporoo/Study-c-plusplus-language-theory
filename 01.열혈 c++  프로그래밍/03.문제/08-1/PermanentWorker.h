#include "Employee.h"
#ifndef PERMANENTWORKER_HEADER
#define PERMANENTWORKER_HEADER

#include <iostream>
using namespace std;

class PermanentWorker : public Employee {
	int salary;
public:
	PermanentWorker(const char* name, int money) : Employee(name), salary(money) {}
	virtual int GetPay() const {
		return salary;
	}
	virtual void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
#endif
