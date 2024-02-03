#ifndef MYFRIENDINFO_HEADER
#define MYFRIENDINFO_HEADER

#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo {
	char* name;
	int age;

public:
	MyFriendInfo(const char* myname, int myage) : age(myage) {
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	void ShowMyFrinedInfo() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~MyFriendInfo() {
		delete[] name;
	}
};
#endif
