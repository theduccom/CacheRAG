
//インクルード文
#include <iostream>
#include <stack>
#include <vector>
#include <stdlib.h>
#include <cstdio>
#include <string>
//#include <assert.h>

//:std省略
using namespace std;

//グローバル変数
int f[1000][1000];

//マクロ指定
#define fc f[x + j][y + l] = c

//深さ優先探索( dfs = Depth - First Search )
void dfs(int a, int b, int c) {

	if (f[a][b] == c) {


		f[a][b] = 10;
		dfs(a + 1, b, c);
		dfs(a - 1, b, c);
		dfs(a, b + 1, c);
		dfs(a, b - 1, c);


	}

//	else return;

}

//メイン文
int main(){

	int w=0, h=0, n = 0;
	int i, j, l;
	int xs, ys; 
	int xg, yg;

	

	for (;;) {
		cin >> w >> h;

		const int cnt = w + h;
		
		if ( cnt == 0) break;
		
		for (i = 1; i <= h; ++i) {
			for (j = 1; j <= w; ++j) {
				f[i][j] = -1;
			}
		}

		cin >> xs >> ys;
		cin >> xg >> yg;
		cin >> n;

		for (i = 0; i < n; ++i) {
			int c, d, x, y;

			cin >> c >> d;
			cin >> x >> y;

			if (d == 0) {
				for (j = 0; j < 4; ++j) {
					for (l = 0; l < 2; ++l) {
						fc;
					}
				}
			}

			else {//d==1

				

				for (j = 0; j < 2; ++j) {
					for (l= 0; l < 4; ++l) {
						fc;
					}
				}
			}
		}
/*

			if (d == 0) {
				for (j = 0; j < 2; ++j) {
					for (l = 0; l < 4; ++l) {
						f[x + j][y + l] = c;
					}
				}
			}

			else {
				for (j = 0; j < 4; ++j) {
					for (l= 0; l < 2; ++l) {
						f[x + j][y + l] = c;
					}
				}
			}	
		}

*/


		dfs(xs, ys, f[xs][ys]);


//		char gg = 'OK';
//		char ggwp = 'NG';


		

		if (f[xg][yg] == 10) printf("OK\n");

		else 		         printf("NG\n");



			//			assert(i == 10);
			//			assert(i = 9);
			//			assert(i = 8);
			//			assert(i = 7);
			//			assert(i = 6);
			//			assert(i = 5);
			//			assert(i = 4);
			//			assert(i = 3);
			//			assert(i = 2);
			//			assert(i = 1);

		


	}
	return 0;
}

/*


20 20
1 1
9 9
7
2 0 1 1
5 1 1 3
2 1 3 3
1 1 5 2
5 1 7 3
2 0 2 7
2 0 6 8
20 20
9 9
1 1
6
2 0 1 1
1 0 5 1
2 1 1 3
5 0 1 7
3 1 5 5
4 1 8 5
0 0


*/
