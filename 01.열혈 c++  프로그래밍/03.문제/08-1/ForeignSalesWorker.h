#include "SalesWorker.h"
#ifndef FOREIGNSALESWORKER_HEADER
#define FOREIGNSALESWORKER_HEADER

#include <iostream>
using namespace std;

namespace RISK_LEVEL {
	enum {
		RISK_A = 3,
		RISK_B = 2,
		RISK_C = 1
	};
}

class ForeignSalesWorker : public SalesWorker {
	int riskLevel;
public:
	ForeignSalesWorker(const char* name, int money, double ratio, int riskLevel) :
		SalesWorker(name, money, ratio), riskLevel(riskLevel) {}
	virtual int GetPay() const {
		return SalesWorker::GetPay() + ((double)riskLevel / 10) * SalesWorker::GetPay();
	}
	virtual void ShowSalaryInfo() const {
		SalesWorker::ShowSalaryInfo();
		cout << "risk pay: " << ((double)riskLevel / 10) * SalesWorker::GetPay() << endl;
		cout << "sum: " << GetPay() << endl << endl;
	}
};
#endif
