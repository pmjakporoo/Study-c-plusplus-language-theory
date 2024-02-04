#include "Employee.h"
#ifndef TEMPORARYWORKER_HEADER
#define TEMPORARYWORKER_HEADER

#include <iostream>
using namespace std;

class TemporaryWorker : public Employee {
	int workTime;
	int payPerHour;

public:
	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay) {}
	void AddWorkTime(int time) {
		workTime += time;
	}
	virtual int GetPay() const {
		return workTime * payPerHour;
	}
	virtual void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
#endif
