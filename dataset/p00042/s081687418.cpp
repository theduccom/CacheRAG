#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define fir first
#define sec second

typedef pair <int, int> P;
vector <P> v(1028);

int dp[1028][2048];

int main(void)
{
	int cnt = 1;
	while (1){
		int w, n;
		cin >> w; if (w == 0) break;
		cin >> n;
		char a;
		for (int i = 0; i < n; i++){
			scanf("%d,%d", &v[i].fir, &v[i].sec);
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j <= w; j++){
				if (j < v[i].sec) dp[i+1][j] = dp[i][j];
				else dp[i+1][j] = max(dp[i][j], dp[i][j-v[i].sec]+v[i].fir);
			}
		}
		int res1 = 0, res2 = 0;
		for (int i = 1; i <= w; i++){
			if (res1 < dp[n][i]){
				res1 = dp[n][i];
				res2 = i;
			}
		}
		cout << "Case " << cnt << ":" << endl << res1 << endl << res2 << endl;
		cnt++;
	}
	return 0;
}