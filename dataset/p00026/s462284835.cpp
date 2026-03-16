#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int paper[15][15] = {};
	// (0, 0) -> (2, 2)
	// (9, 9) -> (11, 11) ??¨??????

	int x, y, size;
	char c1, c2;
	while(cin >> x >> c1 >> y >> c2 >> size){
		x += 2;
		y += 2;

		if(size >= 1){
			paper[x][y] ++;
			paper[x + 1][y] ++;
			paper[x - 1][y] ++;
			paper[x][y + 1] ++;
			paper[x][y - 1] ++;
		}

		if(size >= 2){
			paper[x + 1][y + 1] ++;
			paper[x + 1][y - 1] ++;
			paper[x - 1][y + 1] ++;
			paper[x - 1][y - 1] ++;
		}

		if(size >= 3){
			paper[x + 2][y] ++;
			paper[x - 2][y] ++;
			paper[x][y + 2] ++;
			paper[x][y - 2] ++;
		}
	}

	int ans1 = 0;
	int ans2 = 0;
	for(int i = 2; i < 10 + 2; ++i){
		for(int j = 2; j < 10 + 2; ++j){
			if(paper[i][j] == 0){
				ans1++;
			}

			ans2 = max(ans2, paper[i][j]);
		}
	}

	cout << ans1 << endl;
	cout << ans2 << endl;

	return 0;
}