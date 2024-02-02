#include "NameCard.h"

int main(void) {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1(manClerk);
	NameCard manSENIOR("Hone", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2(manSENIOR);
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}
