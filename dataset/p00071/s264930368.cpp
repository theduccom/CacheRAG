#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define BE(c) c.begin(),c.end()
#define PB push_back
#define F first
#define S second
#define BEB(s) s
using namespace std;
string fld[8];
int dx[12]={-3,-2,-1,0,0,0,0,0,0,1,2,3},dy[12]={0,0,0,-3,-2,-1,1,2,3,0,0,0};
void bomb(int x,int y){
	fld[y][x]='0';
	REP(i,12){
		int nx=x+dx[i],ny=y+dy[i];
		if(nx>=0&&nx<8&&ny>=0&&ny<8&&fld[ny][nx]=='1')bomb(nx,ny);
	}
}
int main(){
	string s;
	int n;
	cin>>n;
	REP(i,n){
		REP(j,8)cin>>fld[j];
		int x,y;
		cin>>x;
		cin>>y;x--;y--;
		bomb(x,y);
		cout<<"Data "<<i+1<<":"<<endl;
		REP(j,8)cout<<fld[j]<<endl;
	}
	return 0;
}