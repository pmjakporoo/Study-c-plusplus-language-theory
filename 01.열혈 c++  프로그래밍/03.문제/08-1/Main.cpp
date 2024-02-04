#include <iostream>
#include "EmployeeHandler.h"
#include "ForeignSalesWorker.h"

int main(void) {
	// 직원 관리를 목적으로 설게된 컨트롤 클래스의 객체 생성
	EmployeeHandler handler;

	// 해외 영업직 등록
	ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(7000); // 영업실적 7000
	handler.AddEmployee(fseller1);

	// 해외 영업직 등록
	ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(7000); // 영업실적 7000
	handler.AddEmployee(fseller2);
	// 해외 영업직 등록
	ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(7000); // 영업실적 7000
	handler.AddEmployee(fseller3);

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();
	return 0;
}
