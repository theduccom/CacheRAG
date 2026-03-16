#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

const int INF = 10000000;
using namespace std;
typedef long long  ll;

int main()
{
	int n;
	
	while (cin>>n, n) {
		int p, a, b, max=0, maxP;
		rep(i, n) {
			cin >> p >> a >> b;
			if (a+b>max) {
				max = a+b;
				maxP = p;
			}
		}
		cout << maxP << " " << max << endl;
	}
	return 0;
}