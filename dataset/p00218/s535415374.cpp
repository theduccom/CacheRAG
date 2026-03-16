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
    while(true){
	int n;
	cin >> n;
	if(n==0)break;
	REP(i,n){
	    double pm,pe,pj;
	    char ans;
	    cin >> pm >> pe >> pj;
	    double ave = (pm + pe + pj) / 3.0;
	    if(pm == 100 || pe == 100 || pj == 100){
		ans = 'A';
	    }else if(pm + pe >= 180){
		ans = 'A';
	    }else if(ave >= 80){
		ans = 'A';
	    }else if(ave >= 70){
		ans = 'B';
	    }else if(ave >= 50 && (pm >= 80 || pe >= 80)){
		ans = 'B';
	    }else ans = 'C';
	    cout << ans << endl;
	}
    }
    return 0;
}