#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
using namespace std;

#define TEST 0 //??\??????????????????(1:??????????????\??? 0:?¨??????\???)
#if TEST
#define FNAME "A"
FILE *in = freopen("./Q/"FNAME, "r", stdin);
FILE *out = freopen("./A/"FNAME, "w", stdout);
#endif


// 12x12????????¢???
char mp[12][13];

// 4????????¢?´¢??¨
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
// ??±???????????¢?´¢
void dfs(int x, int y){
	mp[x][y] = '0';

	for (int i = 0; i < 4; i++){
		int nx = x + dx[i], ny = y + dy[i];
		if (mp[nx][ny] == '1') dfs(nx, ny);
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (cin >> mp[0]){
		for (int i = 1; i < 12; i++){
			cin >> mp[i];
		}

		int islands = 0;
		for (int x = 0; x < 12; x++){
			for (int y = 0; y < 12; y++){
				if (mp[x][y] == '1'){
					islands++;
					dfs(x, y);
				}
			}
		}

		cout << islands << endl;
	}

#if TEST
	fclose(in);
	fclose(out);
#endif
}