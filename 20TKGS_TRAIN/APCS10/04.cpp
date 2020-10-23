#include <iostream>
#include <string.h>
using namespace std;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	n *= 2;
	int posTable[(n+2)/2][2];
	for (int i = 0; i < (n+2)/2; i++) {
		posTable[i][0] = -1;
		posTable[i][1] = -1;
	}
	int insert;
	for (int i = 0; i < n; i++) {
		cin >> insert;
		if (posTable[insert][0] == -1) {
			posTable[insert][0] = i;
		} else posTable[insert][1] = i;
	}
	int blank[n];
	memset(blank,0,sizeof(blank));
	int sum = 0;
	for (int i = 1 ; i-1 < (n/2); i++) {
		int begin = posTable[i][0];
		int end = posTable[i][1];
		for (int t = begin+1; t < end; t++) {
			if (blank[t]) sum++;
		}
		blank[begin] = 1;
		blank[end] = 1;
	}
	cout << sum;
	
}
