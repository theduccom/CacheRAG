#include <iostream>
using namespace std;
int dp[20][20];

void solv(int n){
	for(int k = 0;k < n;k++){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				if(dp[i][j] > dp[i][k] + dp[k][j]){
					dp[i][j] = dp[i][k] + dp[k][j];
				}
			}
		}
	}
}

int main(){
	int n, m, a, b, c, d;
	char s;
	fill((int*)dp, (int*)(dp+20), 100000);
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> a >> s >> b >> s >> c >> s >> d;
		dp[a-1][b-1] = c;
		dp[b-1][a-1] = d;
	}
	solv(n);
	cin >> a >> s >> b >> s >> c >> s >> d;
	cout << c - d - dp[a-1][b-1] - dp[b-1][a-1] << endl;
	return 0;
}