#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9 * 2;
double eps = 1e-10;

int H = 10, W = 10;
int size[] = {5, 9, 13};
int dx[] = {0, 1, -1, 0, 0, 1, 1, -1, -1, 2, -2, 0, 0};
int dy[] = {0, 0, 0, 1, -1, 1, -1, 1, -1, 0, 0, 2, -2};

int main() {
	int x, y, s;
	int cnt[16][16] = {0};
	while(scanf("%d,%d,%d", &x, &y, &s) != EOF){
		s--;
		for(int i = 0; i < size[s]; ++i){
			cnt[x + dx[i]][y + dy[i]]++;
		}
	}
			int ans_c = 0, ans_m = 0;
		for(int i = 0; i < 10; ++i){
			for(int j = 0; j < 10; ++j){
				if(cnt[i][j] == 0)
					ans_c++;
				if(cnt[i][j] > ans_m)
					ans_m = cnt[i][j];
			}
		}
		cout << ans_c << endl;
		cout << ans_m << endl;
	return 0;
}