
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

int main()
{
	int W;
	while (cin >> W, W != -1) {

		int cost = 0;
		if (W > 30) {
			cost += (W - 30) * 160;
			W = 30;
		}
		if (W > 20) {
			cost += (W - 20) * 140;
			W = 20;
		}
		if (W > 10) {
			cost += (W - 10) * 125;
			W = 10;
		}
		cout << 4280 - (cost + 1150) << endl;
	}
	return	0;
}