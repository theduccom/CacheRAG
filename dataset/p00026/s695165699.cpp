#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <queue>
#include <algorithm>
#include <cctype>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const double pi=acos(-1);

int x,y,s,num=0,ans=-1,vx[9]={-1,-1,-1,0,0,0,1,1,1},vy[9]={1,0,-1,1,0,-1,1,0,-1};
char t;
vvi field(10,vi(10));

void func(int a,int b){
	for(int i=0;i<9;i++){
		int ca=a+vx[i],cb=b+vy[i];
		if(ca>=0&&ca<10&&cb>=0&&cb<10) field[ca][cb]++;
	}
}

int main(){
	while(cin>>x>>t>>y>>t>>s){
		func(x,y);
		if(s==2) continue;
		if(s==1){
			int dx[4]={-1,-1,1,1},dy[4]={1,-1,1,-1};
			for(int i=0;i<4;i++){
				int cax=x+dx[i],cay=y+dy[i];
				if(cax>=0&&cax<10&&cay>=0&&cay<10) field[cax][cay]--;
			}
		}
		else{
			int dx[4]={-2,0,0,2},dy[4]={0,2,-2,0};
			for(int i=0;i<4;i++){
				int cax=x+dx[i],cay=y+dy[i];
				if(cax>=0&&cax<10&&cay>=0&&cay<10) field[cax][cay]++;
			}
		}
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(!field[i][j]) num++;
			ans=max(ans,field[i][j]);
		}
	}
	cout<<num<<endl;
	cout<<ans<<endl;
}