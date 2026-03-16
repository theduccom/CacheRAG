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
const int INF = 1e9;
int main(){
	int n,m;
	int data[100][100];
	REP(i,100) REP(j,100) data[i][j] = INF;	
	REP(i,100) data[i][i] = 0;
	cin >> n >> m;
	REP(i,m){
		int a,b,c,d;
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		a--; b--;
		data[a][b] = c;
		data[b][a] = d;
	}
	REP(k,n){
		REP(i,n){
			REP(j,n){
				data[i][j] = min(data[i][j],data[i][k]+data[k][j]);
			}
		}
	}
	int s,g,v,p;
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);
	s--;
	g--;
	cout << v-p-data[s][g]-data[g][s] << endl;
}