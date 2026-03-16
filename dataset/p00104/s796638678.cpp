#include<iostream>
#include<vector>

using namespace std;

/*
タイルは5種類
> : 東
< : 西
^ : 北
v : 南
. : なし

現在地のタイルが東西南北なら移動、
ピリオドなら終了して位置を出力する。

ループの判断
１度到達した位置は記録しておく。
２回目に到達したらループと判定する。

*/


struct Position {
	int xPos;
	int yPos;
};

Position moveNorth(Position pos) {
	return Position{ pos.xPos, pos.yPos - 1 };
}

Position moveSouth(Position pos) {
	return Position{ pos.xPos, pos.yPos + 1 };
}

Position moveWest(Position pos) {
	return Position{ pos.xPos - 1, pos.yPos };
}

Position moveEast(Position pos) {
	return Position{ pos.xPos + 1, pos.yPos };
}


int main() {
	int h, w;
	while (true) {
		cin >> h >> w;
		if (h == 0 && w == 0) {
			break;
		}
		Position hitoPos = {};
		vector<vector<char>> tiles(h);
		vector<vector<bool>> mark(h);
		for (int i = 0; i < h; i++) {
			tiles[i] = vector<char>(w);
			mark[i] = vector<bool>(w);
		}

		for (auto& a : tiles) {
			for (auto &b : a) {
				cin >> b;
			}
		}

		while (!mark[hitoPos.yPos][hitoPos.xPos]) {
			mark[hitoPos.yPos][hitoPos.xPos] = true;
			switch (tiles[hitoPos.yPos][hitoPos.xPos])
			{
			case '>':
				hitoPos = moveEast(hitoPos);
				break;
			case '<':
				hitoPos = moveWest(hitoPos);
				break;
			case '^':
				hitoPos = moveNorth(hitoPos);
				break;
			case 'v':
				hitoPos = moveSouth(hitoPos);
				break;
			}
		}
		if (tiles[hitoPos.yPos][hitoPos.xPos] == '.') {
			cout << hitoPos.xPos << ' ' << hitoPos.yPos << endl;
		}
		else {
			cout << "LOOP" << endl;
		}
	}
	return 0;
}