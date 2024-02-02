#include <iostream>
using namespace std;
class SoSimple {
	int num;
public:
	SoSimple(int n) :num(n) {}
	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}
	void ShowData() const {
		cout << "num: " << num << endl;
	}
};
int main(void) {
	const SoSimple obj(7);
	// obj.AddNum(8); AddNum은 const 멤버함수가 아니기 때문에 호출이 불가능하다.
	return 0;
}
