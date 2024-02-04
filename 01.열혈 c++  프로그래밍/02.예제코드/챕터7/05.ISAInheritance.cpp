#include <iostream>
#include <cstring>

using namespace std;

class Computer {
	char owner[50];
public:
	Computer(const char* name) {
		strcpy(owner, name);
	}

	void Calculate() {
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class NodebookComp : public Computer {
	int Battery;
public:
	NodebookComp(const char* name, int initChag): Computer(name), Battery(initChag) {}
	void Charging() {
		Battery += 5;
	}
	void UseBattey() {
		Battery -= 1;
	}
	void MovingCal() {
		if (GetBatteryInfo() < 1) {
			cout << "충전이 필요합니다." << endl;
			return;
		}
		cout << "이동하면서 ";
		Calculate();
		UseBattey();
	}
	int GetBatteryInfo() {
		return Battery;
	}
};

class TableNoteBook : public NodebookComp {
	char regstPenModel[50];
public:
	TableNoteBook(const char* name, int initChag, const char* pen): NodebookComp(name, initChag){
		strcpy(regstPenModel, pen);
	}
	void Write(const char* penInfo) {
		if (GetBatteryInfo() < 1) {
			cout << "충전이 필요합니다." << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0) {
			cout << "등록된 팬이 아닙니다.";
			return;
		}
		cout << "필기 내용을 처리합니다." << endl;
		UseBattey();
	}
};
int main(void) {
	NodebookComp nc("이수종", 5);
	TableNoteBook tn("정수영", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");

	return 0;
}
