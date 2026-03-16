#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define CLR(a) memset(a,0,sizeof(a))

typedef long long int ll;

using namespace std;

int main(){
    vector<int> primes;
    primes.PB(2);
    FOR(i,3,20001){
	bool flg=true;
	for(int j=2;j*j<=i;j++){
	    if(i % j == 0){
		flg = false;
		break;
	    }
	}
	if(flg){
	    primes.PB(i);
	}
    }
    while(true){
	int n;
	cin >> n;
	if(n == 0) break;
	int x = upper_bound(ALL(primes),n) - primes.begin();
	RREP(i,x){
	    if(primes[i]-primes[i-1]==2){
		cout << primes[i-1] << " " << primes[i]<<endl;
		break;
	    }
	}
    }


    return 0;
}