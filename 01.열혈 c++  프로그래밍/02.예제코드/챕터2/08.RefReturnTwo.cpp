#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref) {
    ref++; // 2
    return ref;
}

int main(void) {
    int num1 = 1; // 2
    int num2 = RefRetFuncOne(num1); //2

    num1 += 1; // 3
    num2 += 100; // 102

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}
