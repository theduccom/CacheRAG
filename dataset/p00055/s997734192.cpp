#include <bits/stdc++.h>
using namespace std;
#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define MOD 1000000007
#define ALL(a) (a).begin(),(a).end()
#define pb(x) push_back(x)
#define ms(m,v) memset(m,v,sizeof(m))
#define D10  fixed<<setprecision(10) 
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> P;
typedef long long ll;

long double a[100];
int main()
{
	while (cin >> a[0])
	{
		auto sum = a[0];
		FOR(i, 1, 10)
		{
			if (i % 2 == 0) a[i] = a[i-1] / 3;
			else a[i] = a[i - 1] * 2;
			sum += a[i];
		}
		cout <<D10<< sum << endl;
	}
}