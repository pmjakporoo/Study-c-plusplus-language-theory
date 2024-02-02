#include <iostream>
using namespace std;

class SoSimple {
	
public:
	static int simObjCnt;
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};
int SoSimple::simObjCnt = 0;

int main(void) {
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;

	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;

	/*
		아래와 같이 public으로 정의된 static 멤버변수를 객체를 이용해서 불러올 수 있지만,	
		객체의 멤버변수를 불러온다는 착각을 할 수 있으므로(static 멤버변수는 객체의 외부에 존재하며 클래스당 1개만 존재하는 변수이기 때문) 지양을 한다. 
	*/
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

	return 0;
}
