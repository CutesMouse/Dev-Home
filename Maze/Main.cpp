//Paint Data
#include <iostream> 
#include "PaintData.h"
using namespace std;
int to_id(int x, int y) {
	return x + 10*y;
}
class Location {
	public:
		int x;
		int y;
		Location(int id) {
			y = id % 10;
			x = id - 10 * y;
		}
};
int main() {
	PaintData d;
	d.paint();
}
