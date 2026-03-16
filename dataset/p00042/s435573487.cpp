#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int W,N,v[1000],w[1000],dp[1001][1001];
char c;

int main(){
	int cn=0;
	while(cin>>W){
		if(W==0)return 0;
		cn++;
		cin>>N;
		for(int i=0;i<N;i++)cin>>v[i]>>c>>w[i];
		for(int i=0;i<N;i++){
			for(int j=0;j<=W;j++){
				if(j<w[i])dp[i+1][j]=dp[i][j];
				else dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
			}
		}
		int V=dp[N][W],w2=W;
		while(dp[N][w2]==V)w2--;
		cout<<"Case "<<cn<<":"<<endl<<dp[N][W]<<endl<<w2+1<<endl;
	}
}