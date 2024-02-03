#include <iostream>
#include <cstring>

using namespace std;

class Person {
	char* name;

public:
	Person(const char* myname) {
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	~Person() {
		delete[] name;
	}
	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person {
	char* major;

public:
	UnivStudent(const char* myname, const char* mymajor) : Person(myname) {
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~UnivStudent() {
		delete[] major;
	}
	void WhoAreYou() const {
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void) {
	UnivStudent str1("Kim", "Mathematics");
	str1.WhoAreYou();

	UnivStudent str2("Hong", "Physics");
	str2.WhoAreYou();
	return 0;
}
