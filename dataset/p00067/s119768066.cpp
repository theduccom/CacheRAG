#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1234567;
const ll INF=1000000010;
const ll LINF=1000000000000000010LL;
const int MAX=10000010;
const double EPS=1e-3;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
char c[12][12];
bool v[12][12];
bool f(int y,int x){
	if(x<0||x>=12||y<0||y>=12||v[y][x]||c[y][x]=='0'){
		return false;
	}
	return true;
}
void dfs(int y,int x){
	v[y][x]=true;
	for(int i=0;i<4;i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		if(f(ny,nx)){
			dfs(ny,nx);
		}
	}
}
int main(){
	while(cin>>c[0]){
		for(int i=1;i<12;i++){
			cin>>c[i];
		}
		memset(v,false,sizeof(v));
		int ans=0;
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(c[i][j]=='1'&&(!v[i][j])){
					dfs(i,j);
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}

