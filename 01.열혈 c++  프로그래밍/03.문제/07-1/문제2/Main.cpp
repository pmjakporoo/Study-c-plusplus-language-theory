#include "MyFrinedDetailInfo.h"

int main(void) {
	MyFrinedDetailedInfo fr1("hong gi", 18, "서울", "010-1111-2222");
	MyFrinedDetailedInfo fr2("ryu isnag", 20, "대구", "010-3333-4444");

	fr1.ShowMyFrinedDetailInfo();
	fr2.ShowMyFrinedDetailInfo();
	return 0;
}
