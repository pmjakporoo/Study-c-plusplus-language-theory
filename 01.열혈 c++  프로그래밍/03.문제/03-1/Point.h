#ifndef POINT_HEADER
#define POINT_HEADER
struct Point {
	int xpos;
	int ypos;

	void MovePos(int x, int y);
	void AddPoint(const Point& pos);
	void ShowPosition();
};
#endif
