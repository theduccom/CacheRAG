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

bool p[1000000];

int main(){
	int n;
	vector<long long> s;
	for(long long i=2;i<1000000;i++)if(!p[i]){
		s.push_back(i);
		for(int j=i+i;j<1000000;j+=i)p[j]=1;
	}
	partial_sum(s.begin(),s.end(),s.begin());
	for(;;){
		scanf("%d",&n);
		if(!n)break;
		printf("%d\n",s[n-1]);
	}
	return 0;
}