#include <iostream>
#include <cstring>

using namespace std;

class Girl;

class Boy {
	int height;
	/*
	 *	friend class Girl; 의 내포된 의미
	 *		1.Girl은 클래스의 이름이다.
	 *		2. Girl 클래스에 대한 friend 선언 
	 */
	friend class Girl; 
public:
	Boy(int len) : height(len) {}
	void ShowYourFriendInfo(Girl& frn);
};

class Girl {
	char phNum[20];
public:
	Girl(const char* num) {
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& Frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn) {
	cout << "Her phone-number is " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn) {
	cout << "His height is " << frn.height << endl;
}

int main(void) {
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}
