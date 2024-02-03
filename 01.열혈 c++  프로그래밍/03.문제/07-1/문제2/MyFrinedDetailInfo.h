#include "MyFrinedInfo.h"
#ifndef MYFRIENDDETAILEDINFO_HEADER
#define MYFRIENDDETAILEDINFO_HEADER

class MyFrinedDetailedInfo : public MyFriendInfo{
	char* addr;
	char* phone;
public:
	MyFrinedDetailedInfo(const char* myname, int myage, const char* myaddr, const char* myphone) :
		MyFriendInfo(myname, myage) {
		addr = new char[strlen(myaddr) + 1];
		strcpy(addr, myaddr);

		phone = new char[strlen(myphone) + 1];
		strcpy(phone, myphone);

	}
	void ShowMyFrinedDetailInfo() {
		ShowMyFrinedInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl;
	}

	~MyFrinedDetailedInfo() {
		delete[] addr;
		delete[] phone;
	}
};
#endif
