#문제2: 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 
  입력 받은 데이터를 그대로 출력하는 프로그램을 작성한다.

#include <iostream>

int main(void) {
	char name[100];
	char phone[100];

	std::cout << "이름을 입력하세요 : ";
	std::cin >> name;

	std::cout << "전화번호를 입력하세요 : ";
	std::cin >> phone;

	std::cout << "이름 : " << name << std::endl;
	std::cout << "전화번호 : " << phone << std::endl;
	return 0;
}
