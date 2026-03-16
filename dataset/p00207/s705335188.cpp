#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
int sx,sy;
int gx,gy;
vvi tmp;
int q;
int dx[]={0,0,1,-1};
int dy[]={-1,1,0,0};
void solve(int x,int y){
	tmp[x][y]=-1;
	rep(i,4){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(tmp[nx][ny]==q){solve(nx,ny);}
	}
}
int main(){
	int n,m;
	while(cin>>n>>m,n+m){
		vvi in(n+2,vi(m+2));
		cin>>sx>>sy>>gx>>gy;
		cin>>n;
		while(n--){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			if(!b)rep(i,4)rep(j,2)in[c+i][d+j]=a;
			else rep(i,2)rep(j,4)in[c+i][d+j]=a;
		}
		tmp=in;
		//rep(i,in.size()){rep(j,in[0].size())cout<<in[i][j]<<" ";cout<<endl;}
		if(in[sx][sy]){
			q=in[sx][sy];
			solve(sx,sy);
		}
		//cout<<endl;
		//rep(i,tmp.size()){rep(j,tmp[0].size())cout<<tmp[i][j]<<" ";cout<<endl;}
		cout<<((tmp[gx][gy]==-1)?"OK":"NG")<<endl;
		//rep(i,22){rep(j,22)cout<<tmp[i][j]<<" ";cout<<endl;}
	}
}