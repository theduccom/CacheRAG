#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

bool d[12][12]={};
char s[12][12]={};

void dfs(int y,int x){
	if(s[y][x]=='0'||d[y][x]==1||y<0||12<=y||x<0||12<=x) return;
	else{
		d[y][x]=1;
		dfs(y+1,x);
		dfs(y,x+1);
		dfs(y,x-1);
		dfs(y-1,x);
	}
}

int main(){
	while(1){
		rep(i,0,12){
			rep(j,0,12){
				cin>>s[i][j];
			}
		}
		if(cin.eof()) break;
		memset(d,0,sizeof(d));
		int ans=0;
		rep(i,0,12){
			rep(j,0,12){
				if(s[i][j]=='1' && d[i][j]==0){
					dfs(i,j); ans++; //o(" "<<i<<j);
				}
			}
		}
		o(ans);
	}
}