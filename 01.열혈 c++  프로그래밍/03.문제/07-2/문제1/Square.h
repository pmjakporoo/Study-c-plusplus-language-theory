#include "Rectangle.h"

#ifndef SQUARE_HEADER
#define SQUARE_HEADER 

class Square: public Rectangle{

public:
	Square(int cm) : Rectangle(cm, cm) {}
};
#endif
