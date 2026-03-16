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
	int n;
	cin >> n;
	if(n==0) break;
	vector< pair<int,int> > patients;
	REP(i,n){
	    int p,d1,d2;
	    cin >> p >> d1 >> d2;
	    patients.PB(pair<int,int>(d1+d2,p));
	}
	sort(RALL(patients));
	cout << patients[0].second << " " << patients[0].first << endl;
    }
    return 0;
}