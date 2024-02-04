#include <iostream>
#include <cstring>

using namespace std;

class Gun {
	int bullet;
public:
	Gun(int num) : bullet(num) {}
	void Shot() {
		cout << "BBANG!" << endl;
		bullet--;
	}
};

class Police : public Gun {
	int handcuffs;
public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff) {}
	void PutHandcuff() {
		cout << "SNAP!" << endl;
		handcuffs--;
	}
};

int main(void) {
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandcuff();
}
