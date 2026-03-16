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
    int res[10] = {0};
    cin >> n;
    if(n==0) break;
    REP(i,n){
	int t;
	cin >> t;
	res[t]++;
    }
    REP(i,10){
	if(res[i] == 0){
	    cout << "-" << endl;
	}else{
	    REP(j,res[i]){
		cout << "*";
	    }
	    cout << endl;
	}
    }
    }
    return 0;
}