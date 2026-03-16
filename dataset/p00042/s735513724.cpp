#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <map>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define SUPmaxm 1001
#define SUPmaxw 1001

int maxm;
int maxw;
int vs[SUPmaxm];
int wos[SUPmaxm];
int dp[SUPmaxm][SUPmaxw]; //m ika no item tukatte, w ika no omomi de, sum v no max
int rev,rew;

void solve(){
	rev=0;
	FOR(m,0,maxm+1) FOR(w,0,maxw+1) dp[m][w]=0;
	FOR(m,1,maxm+1){
		FOR(w,0,maxw+1){
			if(w<wos[m]) dp[m][w] = dp[m-1][w];
			else dp[m][w] = max(dp[m-1][w],dp[m-1][w-wos[m]]+vs[m]);
			rev=max(rev,dp[m][w]);
		}
	}
	rew=0;
	FOR(w,0,maxw+1) FOR(m,0,maxm+1) if(dp[m][w]==rev) {rew=w;return;};
}

int main(){
	for(int casei=1;true;++casei){
		scanf("%d",&maxw);			if(!maxw) return 0;
		scanf("%d",&maxm);
		FOR(m,1,maxm+1) scanf("%d,%d",vs+m,wos+m);
		solve();
		printf("Case %d:\n%d\n%d\n",casei,rev,rew);
	}
}