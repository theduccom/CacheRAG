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

char a[12][12];
bool searched[12][12];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

void dfs(int x,int y){
	// cout << x << " " << y << endl;
	searched[x][y] = true;
	REP(i,4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx >= 12 || ny >= 12) continue;
		if(a[nx][ny] == '1' && searched[nx][ny] == false) dfs(nx,ny);
	}
}
int main(){
	while(1){
		REP(i,12) REP(j,12) searched[i][j] = false;
		REP(i,12){
			string s; 
			cin >> s;
			if(cin.eof()) return 0;
			REP(j,s.size()) a[i][j] = s[j];
		}
		int ans = 0;
		REP(i,12){
			REP(j,12){
				if(a[i][j] == '1' && searched[i][j] == false){
					ans++;
					dfs(i,j);
				} 
			}
		}
		cout << ans << endl;
	}

}