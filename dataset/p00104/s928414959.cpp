//Magical Tiles
#include <iostream>

using namespace std;

int main(){
	int H, W;
	char Tile[101][101];//縦横 HW
	bool TileIsMoved[101][101];
	bool IsLoop,IsEnd;
	char Loader[101];//横行読み
	int px, py;//人位置
	while (1){
		cin >> H >> W;
		if (H == 0 && W == 0)break;
		//初期化
		px = 0; py = 0;
		IsLoop = false;
		IsEnd = false;
		//タイル代入/moved初期化
		for (int i = 0; i < H; ++i){
			cin >> Loader;
			for (int j = 0; j < W; ++j){
				Tile[i][j] = Loader[j];
				TileIsMoved[i][j] = false;
			}
		}
		TileIsMoved[0][0] = true;
		//移動
		while (1){
			switch (Tile[py][px]){
			case '>':
				++px;
				break;
			case '^':
				--py;
				break;
			case 'v':
				++py;
				break;
			case '<':
				--px;
				break;
			case '.':
				IsEnd = true;
				break;
			}
			if (IsEnd)break;
			if (TileIsMoved[py][px]){
				IsLoop = true;
				break;
			}
			TileIsMoved[py][px] = true;
		}
		//出力
		if (IsLoop){
			cout << "LOOP" << endl;
		} else{
			cout << px << " " << py << endl;
		}
	}

	return 0;
}