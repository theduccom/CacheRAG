#include <algorithm>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <cctype>
#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <map>
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
#define fi first
#define se second
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	int dp[11][11]={};
	int x,y,ss;
	char s;
	while(cin>>x>>s>>y>>s>>ss){
		dp[x][y]++;
		if(ss==1){
			if(y-1>=0) dp[x][y-1]++;
			if(y+1<=9) dp[x][y+1]++;
			if(x-1>=0) dp[x-1][y]++;
			if(x+1<=9) dp[x+1][y]++;
		}
		if(ss==2){
			if(y-1>=0) dp[x][y-1]++;
			if(y+1<=9) dp[x][y+1]++;
			if(x-1>=0) dp[x-1][y]++;
			if(x+1<=9) dp[x+1][y]++;
			if(x-1>=0&&y-1>=0) dp[x-1][y-1]++;
			if(x+1<=9&&y-1>=0) dp[x+1][y-1]++;
			if(x-1>=0&&y+1<=9) dp[x-1][y+1]++;
			if(x+1<=9&&y+1<=9) dp[x+1][y+1]++;
		}
		if(ss==3){
			if(y-1>=0) dp[x][y-1]++;
			if(y+1<=9) dp[x][y+1]++;
			if(x-1>=0) dp[x-1][y]++;
			if(x+1<=9) dp[x+1][y]++;
			if(x-1>=0&&y-1>=0) dp[x-1][y-1]++;
			if(x+1<=9&&y-1>=0) dp[x+1][y-1]++;
			if(x-1>=0&&y+1<=9) dp[x-1][y+1]++;
			if(x+1<=9&&y+1<=9) dp[x+1][y+1]++;
			if(x+2<=9) dp[x+2][y]++;
			if(x-2>=0) dp[x-2][y]++;
			if(y+2<=9) dp[x][y+2]++;
			if(y-2>=0) dp[x][y-2]++;
		}
	}
	int ans=0,max=0;
	for(int a=0;a<10;a++){
		for(int b=0;b<10;b++){
			if(dp[a][b]==0) ans++;
			if(dp[a][b]>=max) max=dp[a][b];
		}
	}
	cout<<ans<<endl;
	cout<<max<<endl;
}