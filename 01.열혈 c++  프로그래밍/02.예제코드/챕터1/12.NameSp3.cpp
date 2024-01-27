#include <iostream>

namespace BestComImp1 {
	void SimpleFunc(void);
}

namespace BestComImp1 {
	void PrettyFunc(void);
}

namespace ProgComImp1 {
	void SimpleFunc(void);
}

int main(void) {
	BestComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void) {	
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc(); // 동일한 이름공간에 정의된 함수를 호출 시, 따로 이름공간을 명시할 필요없음
	ProgComImp1::SimpleFunc(); // 다른 이름공간에 정의된 함수를 호출 시, 이름공간을 명시해야 한다.
}

void BestComImp1::PrettyFunc(void) {
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImp1::SimpleFunc() {
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
