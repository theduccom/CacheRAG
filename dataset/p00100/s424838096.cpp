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

typedef pair<int,long long> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)


int main(){
	int n,cnt,b,s,f;
	long long t,c;
	for(;;){
		scanf("%d",&n);
		if(n==0)break;
		cnt=0;
		vector<pii> v;
		rep(i,n){
			scanf("%d%d%d",&b,&t,&c);
			s=v.size();
			f=1;
			rep(i,s)if(v[i].first==b){
				v[i].second += t*c;
				f=0;
			}
			if(f)v.push_back(pii(b,t*c));
		}
		s=v.size();
		rep(i,s)if(v[i].second >= 1000000){
			printf("%d\n",v[i].first);
			cnt++;
		}
		if(cnt==0)puts("NA");
	}
	return 0;
}