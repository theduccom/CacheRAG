#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string.h>
#include<map>
#include<queue>

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)
#define in(i,j,k) ((i)>=(j)&&(i)<=(k))
#define X 1000001
int ans;
int n,x;
bool p[X];
char dp[2*X];

int main(){
	p[0]=1;
	reps(i,2,X)if(!p[i])for(int j=i+i;j<X;j+=i)p[j]=1;
	for(;;){
		scanf("%d%d",&n,&x);
		if(!n)break;
		x++;
		vector<int> v(n);
		rep(i,n){
			cin >> v[i];
		}
		fill_n(dp,X,0);
		dp[0]=1;
		ans=0;
		rep(i,n){
			rep(j,x){
				if(dp[j] && j+v[i]<x){
					dp[j+v[i]]=1;
					if(!p[j+v[i]])ans = max(ans,j+v[i]);
				}
			}
		}
		if(ans)printf("%d\n",ans);
		else puts("NA");

	}
	return 0;
}