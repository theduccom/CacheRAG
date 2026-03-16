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

bool p[60001];

int main(){
	int n,s,l;
	p[0]=p[1]=1;
	reps(i,2,60000)if(!p[i])for(int j=i+i;j<=60000;j+=i)p[j]=1;
	while(~scanf("%d",&n)){
		for(int i=n-1;i>1;i--)if(!p[i]){s=i;break;}
		for(int i=n+1;i<60000;i++)if(!p[i]){l=i;break;}
		printf("%d %d\n",s,l);
	}
	return 0;
}