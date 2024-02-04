#include "Book.h"

class EBook : public Book {
	char* DRMkey;

public:
	EBook(const char* title, const char* isbn, int price, const char* DRMkey) :
		Book(title, isbn, price) {
		this->DRMkey = new char[strlen(DRMkey) + 1];
		strcpy(this->DRMkey, DRMkey);
	}
	~EBook() {
		delete[]DRMkey;
	}

	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "DRMkey: " << DRMkey << endl;
	}
};
