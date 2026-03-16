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
	int n,m;
	cin >> n >> m;
	if(n==0&&m==0)break;
	m++;
	vector< vector<int> > dis(m,vector<int>(m,1000000));
	vector< vector<int> > mon(m,vector<int>(m,1000000));
	REP(i,n){
	    int a,b,cost,time;
	    cin >> a >> b >> cost >> time;
	    dis[a][b] = time;
	    dis[b][a] = time;
	    mon[a][b] = cost;
	    mon[b][a] = cost;
	}
	REP(k,m)REP(i,m)REP(j,m){
	    dis[i][j] = min(dis[i][j],dis[i][k]+dis[k][j]);
	    mon[i][j] = min(mon[i][j],mon[i][k]+mon[k][j]);
	}
	cin >> n;
	REP(i,n){
	    int p,q,r;
	    cin >> p >> q >> r;
	    if(r == 0){
		cout << mon[p][q] << endl;
	    }else{
		cout << dis[p][q] << endl;
	    }
	}
    }
    return 0;
}