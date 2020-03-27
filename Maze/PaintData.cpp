#include "PaintData.h"

PaintData::PaintData() {
	for (int x = 0 ; x < 10 ; x++) {
		for (int y = 0 ; y < 10 ; y++) {
			data[x][y] = false;
		}
	}
};
void PaintData::wallPaint(int a, int b) {
	
}
WallData PaintData::getWallDataAt(int id_a, int id_b) {
	
}
void PaintData::paint() {
	for (int i = 0 ; i <= 20 ; i ++) cout << "＃";
	cout << endl;
	for (int x = 0 ; x < 10 ; x++) {
		for (int y = 0 ; y < 10 ; y++) {
			cout << "＃";
			if (data[x][y]) cout << T;
			else cout << F;
		}
		cout << "＃";
		cout << endl;
		for (int i = 0 ; i <= 20 ; i ++) {
			if (i % 2 == 0) cout << "＃";
			wallPaint((i+1) / 2,)
			//cout << "＃";
		}
		cout << endl;
	}
}
void PaintData::setPoint(int x, int y, bool status) {
	data[x][y] = status;
}
void PaintData::appendWallData(WallData data) {
	walls.push_back(data);
}
