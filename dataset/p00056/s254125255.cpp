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

bool p[50000];

int main(){
	int n,cnt;
	vector<int> v;
	for(int i=2;i<50000;i++)if(!p[i]){
		v.push_back(i);
		for(int j=i+i;j<50000;j+=i)p[j]=1;
	}
	for(;;){
		scanf("%d",&n);
		if(!n)break;
		cnt=0;
		for(int i=0;v[i]<=n/2;i++)cnt+=binary_search(v.begin(),v.end(),n-v[i]);
		printf("%d\n",cnt);
	}
	return 0;
}