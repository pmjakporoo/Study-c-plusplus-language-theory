#문제1: 아래 코드의 함수 BoxVolume를 매개변수의 디폴트 값 지정 형태가 아닌, 함수 오버로딩의 형태로 재구현한다. 


  #include <iostream>

int BoxVolume(int length, int width = 1, int height = 1);

int main(void) {
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	// std::cout << "[D, D, D] : " << BoxVolume() << std::endl; length는 디폴트 값이 없으므로 에러 발생

	return 0;
}
int BoxVolume(int length, int width, int height) {
	return length * width * height;
}
-------------------------------------------------------------------

#include <iostream>

int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);

int main(void) {
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	// std::cout << "[D, D, D] : " << BoxVolume() << std::endl; length는 디폴트 값이 없으므로 에러 발생

	return 0;
}
int BoxVolume(int length, int width, int height) {
	return length * width * height;
}

int BoxVolume(int length, int width) {
	return length * width * 1;
}

int BoxVolume(int length) {
	return length * 1 * 1;
}

