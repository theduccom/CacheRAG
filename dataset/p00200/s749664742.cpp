#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define RREP(i,a,b) for(int i=(a);i>=(b);i--)
#define pq priority_queue
#define P pair<int,int>
#define P2 pair<int,P>
#define P3 pair<int,P2>
typedef long long ll; typedef long double ld;
using namespace std;
const int INF=1e9, MOD=1e9+7, around[]={0,1,1,-1,-1,0,-1,1,0,0};
const ll LINF=1e18;
const ld PI=abs(acos(-1));
int n,m,k,a,b,c,d,li1[110][110],li2[110][110];

int main(){
	while(cin >> n >> m,n||m){
		REP(i,0,m) REP(j,0,m) if(i!=j) li1[i][j]=INF,li2[i][j]=INF;
		REP(i,0,n) cin >> a >> b >> c >> d,li1[a-1][b-1]=c,li1[b-1][a-1]=c,li2[a-1][b-1]=d,li2[b-1][a-1]=d;
		REP(k,0,m) REP(j,0,m) REP(i,0,m) li1[i][j]=min(li1[i][j], li1[i][k]+li1[k][j]),li2[i][j]=min(li2[i][j], li2[i][k]+li2[k][j]);
		cin >> k;
		REP(i,0,k){
			cin >> a >> b >> c;
			if(c) cout << li2[a-1][b-1] << endl;
			else cout << li1[a-1][b-1] << endl;
		}
	}
	return 0;
}