#ifndef CALCULATOR_HEADER
#define CALCULATOR_HEADER
#include <iostream>

using namespace std;

struct OpCount {
	int addC;
	int minC;
	int divC;
	int mulC;
};

class Calculator {
	OpCount counter;

public:
	void Init() {
		counter.addC = 0;
		counter.divC = 0;
		counter.minC = 0;
		counter.mulC = 0;
	}
	double Add(const double& num1, const double& num2);
	double Div(const double& num1, const double& num2);
	double Mul(const double& num1, const double& num2);
	double Min(const double& num1, const double& num2);

	void ShowOpCount();
};

inline double Calculator::Add(const double& num1, const double& num2) {
	counter.addC++;
	return num1 + num2;
}

inline double Calculator::Min(const double& num1, const double& num2) {
	counter.minC++;
	return num1 - num2;
}

inline double Calculator::Mul(const double& num1, const double& num2) {
	counter.mulC++;
	return num1 * num2;
}

inline double Calculator::Div(const double& num1, const double& num2) {
	counter.divC++;
	return num1 / num2;
}

inline void Calculator::ShowOpCount() {
	cout << "덧셈: " << counter.addC << ' ' << "뺄셈: " << counter.minC << ' ' << "곱셈: " << counter.mulC << ' ' << "나눗셈: " << counter.divC << endl;
}

#endif
