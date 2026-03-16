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


int main(){
	int n,m,s;
	int v[1001];
	for(;;){
		scanf("%d%d",&n,&m);
		if(!n)break;
		s=0;
		rep(i,n){
			scanf("%d",v+i);
			s+=v[i];
		}
		sort(v,v+n);
		rep(i,n/m)s-=v[i*m+n%m];
		printf("%d\n",s);
	}
	return 0;
}