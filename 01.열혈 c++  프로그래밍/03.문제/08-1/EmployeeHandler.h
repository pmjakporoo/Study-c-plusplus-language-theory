#ifndef EMPLOYEEHANDLER_HEADER
#define EMPLOYEEHANDLER_HEADER
#include "Employee.h"

class EmployeeHandler {
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(Employee* emp) {
		empList[empNum++] = emp;
	}

	void ShowTotalSalary() const {
		int sum = 0;

		for (int i = 0; i < empNum; i++) {
			sum += empList[i]->GetPay();
		}

		cout << "salary sum: " << sum << endl;
	}

	void ShowAllSalaryInfo() const {

		for (int i = 0; i < empNum; i++) {
			empList[i]->ShowSalaryInfo();
		}
	}

	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
	}
};
#endif
