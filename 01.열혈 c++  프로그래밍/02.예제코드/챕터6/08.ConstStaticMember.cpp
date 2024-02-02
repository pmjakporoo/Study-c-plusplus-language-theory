#include <iostream>
using namespace std;

class CountryArea {
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main(void) {
	cout << "RUSSIA 면적: " << CountryArea::RUSSIA << endl;
	cout << "CANADA 면적: " << CountryArea::CANADA << endl;
	cout << "CHINA 면적: " << CountryArea::CHINA << endl;
	cout << "SOUTH_KOREA 면적: " << CountryArea::SOUTH_KOREA << endl;

}
