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
    vector<int> primes;
    primes.PB(2);
    for(int i=3;i<=1000001;i++){
	bool flg = true;
	for(int j=0;primes[j]*primes[j]<=i;j++){
	    if(i % primes[j] == 0) flg = false;
	}
	if(flg) primes.PB(i);
    }
    while(true){
	int ans = 0;
	int n,x;
	cin >> n >> x;
	if(n==0&&x==0) break;
	bool d[1000001] = {false};
	d[0] = true;
	REP(i,n){
	    int a;
	    cin >> a;
	    for(int i=0;i+a<=1e6;i++){
		if(d[i])
		    d[i+a] = d[i];
	    }
	}
	int s = upper_bound(ALL(primes),x) - primes.begin();
	RREP(i,s){
	    if(d[primes[i]]){
		ans = primes[i];
		break;
	    }
	}
	if(ans==0) cout << "NA" << endl;
	else cout << ans << endl;
    }
    return 0;
}