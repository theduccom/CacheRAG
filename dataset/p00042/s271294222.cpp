#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int DP[1001][1001];
int main(){
	int W,N,C=0;
	while(cin>>W){
		if(!W) break;
		cin>>N;
		int v[1000],w[1000],SUMW=W;
		for(int i=0;i<N;++i) scanf("%d,%d",&v[i],&w[i]);
		for(int i=0;i<=N;++i)for(int j=0;j<=W;++j) DP[i][j]=0;
		for(int i=0;i<N;++i){
			for(int j=0;j<=W;++j){
				if(w[i]>j){//入らない時
					DP[i+1][j]=DP[i][j];
				}else{//入る時
					DP[i+1][j]=max(DP[i][j],DP[i][j-w[i]]+v[i]);
				}
			}
		}
		for(int j=W;j>=0;--j) if(DP[N][W]==DP[N][j])SUMW=j;
		cout<<"Case "<<++C<<":\n";
		cout<<DP[N][W]<<"\n"<<SUMW<<"\n";
	}
	return 0;
}