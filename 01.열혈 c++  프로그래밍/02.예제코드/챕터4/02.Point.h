#ifndef POINT_HEADER
#define POINT_HEADER

class Point  {
	int x;
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;

	bool SetX(int xpos);
	bool SetY(int ypos);
};
#endif
