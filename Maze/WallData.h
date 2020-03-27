#include <iostream>
using namespace std;
class WallData {
	private:
		int a;
		int b;
		bool Breaked;
	public:
		bool isBreaked(int,int);
		WallData(int, int);
		void break_wall();
}; 
