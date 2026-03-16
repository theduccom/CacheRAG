
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
	int n;
	while (cin >> n, n) {
		rep(i, n) {
			int pm, pe, pj;
			cin >> pm >> pe >> pj;

			int ave = (pm + pe + pj) / 3;
			int me_ave = (pm + pe) / 2;
			if (pm == 100 || pe == 100 || pj == 100 || ave >= 80 || me_ave >= 90)
				cout << 'A' << endl;
			else if (ave >= 70 || (ave >= 50 && (pm >= 80 || pe >= 80)))
				cout << 'B' << endl;
			else
				cout << 'C' << endl;
		}
	}
	return	0;
}