#include <iostream>
#include <cstring>
using namespace std;
class Person {
	char* name;
	int age;
public:
	Person(char* myname, int myage):age(myage) {
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}

	//Person():age(0) {
	//	name = NULL;
	//	cout << "Called person()" << endl;
	//}

	void SetPersonInfo(char* myname, const int myage) {
		name = myname;
		age = myage;
	}

	void ShowPersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person() {
		delete []name;
		cout << "called destructor!" << endl;
	}
};

int main(void) {
	Person * parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		parr[i] = new Person(namestr, age);
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	return 0;
}
