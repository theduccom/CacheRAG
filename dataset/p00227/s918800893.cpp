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
	int m, n;
	while (cin >> n >> m, n) 
	{
		vector<int> p(n+1);

		for (int i = 1; i <= n; i++)cin >> p[i];

		sort(p.begin(), p.end());
		reverse(p.begin(), p.end());

		ll sum = 0;
		for (int i = 1; i <= n; i++) {
			if (i%m != 0)sum += p[i-1];
		}
		cout << sum << endl;
	}
	return 0;
}