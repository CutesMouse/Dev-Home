#include "WallData.h"

WallData::WallData(int a, int b) : a(a), b(b) {
	Breaked = false;
}
void WallData::break_wall() {
	Breaked = true;
}
bool WallData::isBreaked(int a, int b) {
	return Breaked;
} 
