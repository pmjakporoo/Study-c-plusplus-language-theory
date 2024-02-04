#ifndef BOOK_HEADER
#define BOOK_HEADER

#include <iostream>
#include <cstring>

using namespace std;

class Book {
	char* title;
	char* isbn;
	int price;

public:
	Book(const char* title, const char* isbn, int price) : price(price) {
		this->title = new char[strlen(title) + 1];
		strcpy(this->title, title);

		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->isbn, isbn);
	}

	~Book() {
		delete[] title;
		delete[] isbn;
	}

	void ShowBookInfo() {
		cout << "title: " << title << endl;
		cout << "isbn: " << isbn << endl;
		cout << "price: " << price << endl;
	}
};
#endif
