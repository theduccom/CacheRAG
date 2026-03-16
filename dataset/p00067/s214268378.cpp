#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se secondO
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int dy[4]={1,0,-1,0};
int dx[4]={0,1,0,-1};
char c[15][15];

void dfs(int y,int x){
	c[y][x]='0';
	rep(i,0,4){
		int ny=y+dy[i];
		int nx=x+dx[i];
		if(0<=nx && nx<12 && 0<=ny && ny<12){
			if(c[ny][nx]=='1'){
				dfs(ny,nx);
			}
		}
	}
	return;
}


signed main(){
	while(1){
		rep(i,0,12){
			rep(j,0,12){
				cin>>c[i][j];
			}
		}
		if(cin.eof()) break;
		int ans=0;
		rep(i,0,12){
			rep(j,0,12){
				if(c[i][j]=='1'){
					ans++;
					dfs(i,j);
				}
			}
		}
		o(ans);
	}
}