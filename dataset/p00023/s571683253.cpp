#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-8

int main(){

	int n;
	cin >> n;
	while(n--){
		double xa, ya, ra, xb, yb, rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double d = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
		if(d > ra + rb) cout << 0 << endl;
		else if(d < fabs(ra - rb)){
			if(ra > rb) cout << 2 << endl;
			else cout << -2 << endl;
		}
		else cout << 1 << endl;
	}
	return 0;
}