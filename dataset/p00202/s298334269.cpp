#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int n, x, ans;
int in[31], in2[31];
bool dp[1000001];
void solve(int a, int sum){
	for (int i = a; i <= n; i++){
		if (sum + in[i] > x&&!in2[i]){
			in[i] /= 10;
			in2[i] = 1;
		}
		if (sum + in[i] <= x){
			if (dp[sum + in[i]])
				continue;
			if (sum + in[i] % 2){
				dp[sum + in[i]] = 1;
			}
			solve(i, sum + in[i]);
		}
	}
}
int main(){
	while (cin >> n >> x&&n&&x){
		ans = 0;
		fill(dp, dp + 1000001, 0);
		for (int i = 1; i <= n; i++){
			cin >> in[i];
			in[i] *= 10;
			in2[i] = 0;
		}
		solve(1, 0);
		for (int i = x; i > 0; i--){
			if (dp[i]){
				for (int j = 5; j <= x; j++){
					if (j == i)
						ans = j;
					if (i % j == 0)
						break;
				}
				if (ans)
					break;
			}
		}
		if (ans)
			cout << ans << endl;
		else
			cout << "NA" << endl;
	}
	return 0;
}