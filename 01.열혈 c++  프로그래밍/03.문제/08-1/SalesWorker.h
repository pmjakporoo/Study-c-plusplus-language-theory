#include "PermanentWorker.h"
#ifndef SALESWORKER_HEADER
#define SALESWORKER_HEADER

#include <iostream>
using namespace std;

class SalesWorker : public PermanentWorker {
	int salesResult;
	double bounsRatio;
public:
	SalesWorker(const char* name, int money, double ratio) :
		PermanentWorker(name, money), salesResult(0), bounsRatio(ratio) {}

	void AddSalesResult(int value) {
		salesResult += value;
	}

	virtual int GetPay() const {
		return PermanentWorker::GetPay() + (int)(salesResult * bounsRatio);
	}
	virtual void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary: " << GetPay() << endl;
	}
};
#endif
