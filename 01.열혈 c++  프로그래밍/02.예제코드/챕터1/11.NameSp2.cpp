#include <iostream>

namespace BestComImp1 {
	void SimpleFunc(void);
}

namespace ProgComImp1 {
	void SimpleFunc(void);
}

int main(void) {
	BestComImp1::SimpleFunc();
	ProgComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc() {	
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImp1::SimpleFunc() {
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
