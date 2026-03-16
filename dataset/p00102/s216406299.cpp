#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
using namespace std;

int main(){
	int N;
	while(cin>>N,N){
		int chart[11][11]={};
		for(int i=0;i<N;i++)for(int j=0;j<N;j++) cin>>chart[i][j];
		for(int i=0;i<=N;i++){
			int sumW=0,sumH=0;
			for(int j=0;j<N;j++){
				sumW += chart[i][j];
				sumH += chart[j][i];
			}
			chart[i][N] = sumW;
			chart[N][i] = sumH;
		}
		for(int i=0;i<=N;i++){
			for(int j=0;j<=N;j++){
				printf("%5d",chart[i][j]);
			}puts("");
		}
	}
    return 0;
}