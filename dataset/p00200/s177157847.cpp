#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define pi 3.14159265359
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
const ll int INF = 1e9;
int ti[101][101];//time
int co[101][101];//cost
int n,m;
int main(){
	while(1){
		cin >> n >> m; 
		if(n == 0 && m == 0) break;
		REP(i,101) REP(j,101) ti[i][j] = co[i][j] = INF;
		REP(i,101) ti[i][i] = co[i][i] = 0;

		REP(i,n){
			ll int a,b,cost,tim;
			cin >> a >> b >> cost >> tim;
			a--; b--;
			co[a][b] = co[b][a] = cost;
			ti[a][b] = ti[b][a] = tim;
		}
		//Warshall???Floyd Algorithm
		REP(k,m){
			REP(i,m){
				REP(j,m){
					ti[i][j] = min(ti[i][j], ti[i][k] + ti[k][j]);
					co[i][j] = min(co[i][j], co[i][k] + co[k][j]);
				}
			}
		}
		int k;
		cin >> k;
		REP(i,k){
			int a,b,r;
			cin >> a >> b >> r;
			a--; b--;
			if(r == 0) cout << co[a][b] << endl;
			else cout << ti[a][b] << endl;
		}
	}
	return 0;
}