#include <iostream>
#include <cstring>

using namespace std;

class Person {
	char* name;
	int age;

public:
	Person(const char* myname, int myage): age(myage) {
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	void ShowPersonInfo() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person() {
		delete[] name;
		cout << "Called Destructor!" << endl;
	}
};
int main(void) {
	Person man1("Lee dong woo", 29);
	Person man2 = man1; // 디폴트 복사 생성자에 의해 변수 생성 및 초기화 진행
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
