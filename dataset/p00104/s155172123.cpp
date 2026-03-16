#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
#define SZ(n)  (int)n.size()
#define dump(x) cerr<<#x<<" = "<<(x)<<endl;
#define debug(x)cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define MP make_pair
#define PB push_back
	
	char ta[130][130];
	int h,w,ny=0,nx=0,cnt=0;
	bool ok(int y,int x,int ny,int nx){if(ny+y>=0&&ny+y<=h-1&&nx+x>=0&&nx+x<=w-1)return 1;else return 0;}
	int main(){

	while(cin>>h>>w,h+w){
	cnt=0;
	ny=nx=0;
	for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>ta[i][j];
	while(true){
		//cout<<ny<<" "<<nx<<endl;
		if(ta[ny][nx]=='.'){cout<<nx<<" "<<ny<<endl;break;}
		if(cnt>=50000){cout<<"LOOP"<<endl;;break;}
		if(ta[ny][nx]=='>')nx++;
		else if(ta[ny][nx]=='<')nx--;
		else if(ta[ny][nx]=='^')ny--;
		else if(ta[ny][nx]=='v')ny++;
		cnt++;
	}
	for(int i=0;i<130;i++)for(int j=0;j<130;j++)ta[i][j]=' ';
	}
	return 0;
} 