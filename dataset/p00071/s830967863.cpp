#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-9;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
char c[8][8];
void dfs(int x,int y){
	c[y][x]='0';
	for(int i=x+1;i<=min(7,x+3);i++){
		if(c[y][i]=='1'){
			dfs(i,y);
		}
	}
	for(int i=x-1;i>=max(0,x-3);i--){
		if(c[y][i]=='1'){
			dfs(i,y);
		}
	}
	for(int i=y+1;i<=min(7,y+3);i++){
		if(c[i][x]=='1'){
			dfs(x,i);
		}
	}
	for(int i=y-1;i>=max(0,y-3);i--){
		if(c[i][x]=='1'){
			dfs(x,i);
		}
	}
}
int main(){
	int n;cin>>n;
	int d=1;
	while(n--){
		for(int i=0;i<8;i++){
			cin>>c[i];
		}
		int sx,sy;
		cin>>sx>>sy;sx--;sy--;
		dfs(sx,sy);
		cout<<"Data "<<d<<":"<<endl;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<c[i][j];
			}
			cout<<endl;
		}
		d++;
	}
}

