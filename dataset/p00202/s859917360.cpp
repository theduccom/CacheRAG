#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>
#include<limits>
#include<iterator>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define rep(i,n) for(int i=0; i<n; i++)
#define INF (1<<20)

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ll, char> plc;

ll arr[1000010];

void Eratosthenes(int n) 
{
	rep(i, n+1)arr[i] = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (arr[i]) {
			for (int j = 0; i*(j + 2) <= n; j++)
				arr[i*(j + 2)] = 0;
		}
	}
}

int dp[1000001];
int a[31], c[31];

int main()
{
	int n,x;
	while (cin >> n >> x, n) {

		Eratosthenes(x);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			c[i] = 1000000 / a[i];
		}

		for (int i = 0; i <= 1000000; i++)
			dp[i] = -1;

		dp[0] = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= x; j++) {
				if (dp[j] >= 0) {
					dp[j] = c[i];
				}
				else if (j < a[i] || dp[j - a[i]] <= 0) {
					dp[j] = -1;
				}
				else {
					dp[j] = dp[j - a[i]] - 1;
				}
			}
		}

		bool flag = false;
		for (int i = x; i >= 2; i--) {
			if (dp[i] >= 0) {
				if (arr[i]) {
					cout << i << endl;
					flag = true;
					break;
				}
			}
		}
		if(!flag)
		cout << "NA" << endl;
	}
	return 0;
}