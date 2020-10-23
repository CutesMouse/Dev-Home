#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > dpd;
vector<vector<bool> > used;
vector<vector<int> > map;
int dp(int x, int y) {
	
}
int main() {
	int m,n;
	cin >> m >> n;
	dpd.resize(n);
	used.resize(n);
	map.resize(n);
	for (int i = 0 ; i < n; i++) {
		dpd[i].resize(m);
		used[i].resize(m);
		map[i].resize(m);
	}
	for (int y = 0; y < m; y++) {
		for (int x = 0; x < n; x++) {
			cin >> map[x][y];
		}
	}
	int smallest = dp(0,m-1);
	for (int y = 0; y < m; y++) {
		for (int x = 0; x < n; x++) {
			int value = map[x][y];
			if (x != 0) value += map[x-1][y];
			if (y != 0) 
			if (used[x][y]) dpd[x][y];
			used[x][y] = true;
			int value = map[x][y] + dp(x-1,y) + dp(x,y-1) + dp(x+1);
			dpd[x][y] = value;
		}
	}
	cout << dp(n-1,m-1);
}
