#include <iostream>
#include <cstring>

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
};

class PermanentWorker : public Employee {
	int salary;
public:
	PermanentWorker(const char* name, int money) : Employee(name), salary(money) {}
	int GetPay() const {
		return salary;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee {
	int workTime;
	int payPerHour;

public: 
	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay) {}
	void AddWorkTime(int time) {
		workTime += time;
	}
	int GetPay() const {
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker {
	int salesResult;
	double bounsRatio;
public:
	SalesWorker(const char* name, int money, double ratio) :
		PermanentWorker(name, money), salesResult(0), bounsRatio(ratio) {}
	void AddSalesResult(int value) {
		salesResult += value;
	}
	int GetPay() const {
		return PermanentWorker::GetPay() + (int)(salesResult * bounsRatio);
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployHandler {
	Employee* empList[50];
	int empNum;
public:
	EmployHandler() : empNum(0) {}
	void AddEmployee(Employee* emp) {
		empList[empNum++] = emp;
	}
	void ShowTotalSalary() const {
		int sum = 0;
		/*
		for(int i = 0; i < empNum; i++) {
			sum += empList[i]->GetPay();
		}
		*/
		cout << "salary sum: " << sum << endl;
	}
	void ShowAllSalaryInfo() const {
		/*
		for(int i = 0; i < empNum; i++) {
			empList[i]->ShowSalaryInfo();
		}
		*/
	}
	~EmployHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
	}
};

int main(void) {
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성 
	EmployHandler handler;

	// 정규직 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	// 영업직 등록
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	// 이번 달에 지불해야 할 급여 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}
