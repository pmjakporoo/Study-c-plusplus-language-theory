#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr(int len) {
	// char * str = (char *)malloc(sizeof(char) * len);
	char* str = new char[len];
	return str;
}
int main(void) {
	char* str = MakeStrAdr(20);
	strncpy(str, "I am so happy~happy~happy~happy~happy~happy~happy~", 19);
	str[19] = 0;
	cout << str << endl;
	// free(str);
	delete[]str;
	return 0;
}
