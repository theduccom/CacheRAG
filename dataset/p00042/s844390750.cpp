#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX_N 1000
#define MAX_W 1000


int main()
{	
	int cnt = 0;
	int W, N;
	while( cin>>W && W && cin>>N){
		cnt++;
		int dp[MAX_N+1][MAX_W+1];
		for(int i=0;i<N;i++){
			int v,w;
			scanf("%d,%d",&v,&w);
			for(int j=0;j<W+1;j++){
				if(j-w>=0){
					dp[i+1][j] = max( dp[i][j], dp[i][j-w] + v);
				}else{
					dp[i+1][j] = dp[i][j];
				}
			}
		}
		cout<<"Case"<<' '<<cnt<<":"<<endl;
		for(int j=0;j<W+1;j++){
			if( dp[N][j] == dp[N][W] ){
				cout<< dp[N][j] << endl << j << endl;
				// そこからは全て一致するのでbreak
				break;
			}
		}
	}
	return 0;
}