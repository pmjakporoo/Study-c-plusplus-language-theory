#ifndef NAMECARD_HEADER
#define NAMECARD_HEADER
#include <cstring>

#include <iostream>
using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos) {
		switch (pos) {
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}

class NameCard {
	char* name;
	char* companyName;
	char* phone;
	int compos;

public:
	NameCard(const char* name, const char* companyName, const char* phone, int COMP_POS) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);

		this->companyName = new char[strlen(companyName) + 1];
		strcpy(this->companyName, companyName);

		this->phone = new char[strlen(phone) + 1];
		strcpy(this->phone, phone);

		compos = COMP_POS;
	}

	NameCard(const NameCard& copy) : compos(copy.compos) {
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);

		companyName = new char[strlen(copy.companyName) + 1];
		strcpy(companyName, copy.companyName);

		phone = new char[strlen(copy.phone) + 1];
		strcpy(phone, copy.phone);
	}

	void ShowNameCardInfo() const {
		cout << "이름:" << name << endl;
		cout << "회사:" << companyName << endl;
		cout << "전화번호:" << phone << endl;
		cout << "직급: ";
		COMP_POS::ShowPositionInfo(compos);
	}
};
#endif
