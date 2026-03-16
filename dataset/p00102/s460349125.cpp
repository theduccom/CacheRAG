#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string.h>

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)


int main(){
	int n,t;
	int d[20][20];
	for(;;){
		scanf("%d",&n);
		if(n==0)break;
		rep(i,n){
			t=0;
			rep(j,n){
				scanf("%d",d[i]+j);
				t+=d[i][j];
			}
			d[i][n]=t;
		}
		rep(i,n+1){
			t=0;
			rep(j,n)t+=d[j][i];
			d[n][i]=t;
		}
		rep(i,n+1){rep(j,n+1)printf("%5d",d[i][j]);puts("");}
	}
	return 0;
}