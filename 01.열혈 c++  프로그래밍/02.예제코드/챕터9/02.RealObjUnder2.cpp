#include <iostream>
using namespace std;

//클래스 Data를 흉내 낸 영역
typedef struct Data {
	int data;
	void (*ShowData)(Data*);
	void (*Add)(Data*, int);
} Data;

void ShowData(Data* THIS) {
	cout << "Data: " << THIS->data << endl;
}

void Add(Data* THIS, int num) {
	THIS->data += num;
}

// 적절히 변경된 main함수
int main(void) {
	Data obj = { 15, ShowData, Add };
	obj.Add(&obj, 17);
	obj.ShowData(&obj);
	return 0;
}
