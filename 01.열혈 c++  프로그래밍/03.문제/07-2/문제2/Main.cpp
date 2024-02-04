#include "EBook.h"
#include "Book.h"
#include <iostream>
using namespace std;

int main(void) {
	Book book("좋은 c++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 c++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;
}
