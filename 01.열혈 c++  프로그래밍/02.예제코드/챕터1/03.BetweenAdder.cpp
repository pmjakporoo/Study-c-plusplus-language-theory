#include <iostream>

int main(void) {
	int val1, val2;
	int result = 0;

	std::cout << "두 개의 숫자입력: ";
	std::cin >> val1 >> val2;

	int smallValue = val1 > val2 ? val2 : val1;
	int bigValue = val1 > val2 ? val1 : val2;

	for (int i = smallValue; i <= bigValue; i++) {
		result += i;
	}

	std::cout << "두 수 사이의 정수 합 : " << result << std::endl;
	return 0;
}
