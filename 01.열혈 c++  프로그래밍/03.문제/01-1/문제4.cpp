#문제4: 급여 계산 프로그램을 작성한다.
모든 판매원에게 매달 50만원의 기본 급여와, 
물품 판매 가격의 12%에 해당하는 돈을 지급한다. 
이러한 급여 계산은 -1이 입력될 때까지 계속 되어야 한다. 

#include <iostream>

int main(void) {
	int salePrice = 0;
	while (1) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> salePrice;

		if (salePrice == -1) {
			break;
		}

		int salary = 50 + salePrice * 0.12;
		std::cout << "이번달 급여: " << salary << std::endl;
	}

	std::cout << "프로그램을 종료합니다." << std::endl;
	return 0;
}
