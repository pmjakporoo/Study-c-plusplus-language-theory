#include <iostream>
using namespace std;

class Person {
public:
	void Sleep() {
		cout << "Sleep" << endl;
	}
};

class Student : public Person {
public:
	void Study() {
		cout << "Study" << endl;
	}
};

class PartTimsStudent : public Student {
public:
	void Work() {
		cout << "Work" << endl;
	}
};

int main(void) {
	Person* ptr1 = new Student();
	Person* ptr2 = new PartTimsStudent();

	Student* ptr3 = new PartTimsStudent();
	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();
	return 0;
}
