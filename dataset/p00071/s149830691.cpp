#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pii;

string s[8];

void dfs(int y,int x){
	if(y<0||y>7||x<0||x>7) return;
	if(s[y][x]=='1'){
		s[y][x]='0';
		rer(i,1,3){
			dfs(y+i,x);
			dfs(y-i,x);
			dfs(y,x+i);
			dfs(y,x-i);
		}
	}
}

int main(){
	int n;
	cin>>n;
	rep(i,0,n){
		int x,y;
		cin.ignore();
		rep(j,0,8){
			cin>>s[j]; //o(" "<<s[j]);
		}
		cin>>x>>y;
		dfs(y-1,x-1);
		o("Data "<<i+1<<":");
		rep(i,0,8) o(s[i]);
	}
}