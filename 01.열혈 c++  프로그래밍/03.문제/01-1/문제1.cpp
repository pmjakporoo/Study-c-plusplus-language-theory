#사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성한다. 

#include <iostream>

int main(void) {
	int sum = 0;
	for (int i = 1; i <= 5; i++) {
		int inputN = 0;
		std::cout << i << "번째 정수 입력: ";
		std::cin >> inputN;
		sum += inputN;
	}
	std::cout << "합계: " << sum << std::endl;
	return 0;
}
