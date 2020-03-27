#include <iostream>
#include <vector>
#include "WallData.h" 
using namespace std;
class PaintData {
	public:
		PaintData();
		void paint();
		void setPoint(int x, int y, bool status);
		void appendWallData(WallData);
		void wallPaint(int a, int b);
		WallData getWallDataAt(int id_a, int id_b);
	private:
		string T = "  ";
		string F = "  ";
		bool data[10][10];
		vector<WallData> walls;
};
