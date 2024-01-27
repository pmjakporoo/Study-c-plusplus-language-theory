#문제3: 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성한다.

  
#include <iostream>

int main(void) {
	int dan = 1;
	std::cout << "숫자를 입력하세요 : ";
	std::cin >> dan;

	for (int i = 1; i <= 9; i++) {
		std::cout << dan << " x " << i << " = " << dan * i << std::endl;
	}
	return 0;
}
