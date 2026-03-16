#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define CLR(a) memset(a,0,sizeof(a))

typedef long long int ll;

using namespace std;

int main(){
    while(true){
	int n,m;
	cin >> n >> m;
	if(n==0&&m==0) break;
	vector<int> a(n);
	REP(i,n) cin >> a[i];
	int sum = 0;
	REP(i,n) sum += a[i];
	sort(RALL(a));
	for(int i=m-1;i<n;i+=m){
	    sum -= a[i];
	}
	cout << sum << endl;
    }
    return 0;
}