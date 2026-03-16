#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int N,M;
int P[1000];
int main()
{
	while(true){
		scanf("%d%d",&N,&M);
		if(N==0&M==0)break;
		for(int i=0;i<N;i++)scanf("%d",&P[i]);
		sort(P,P+N);reverse(P,P+N);
		int ans=0;
		for(int i=0;i<N;i++){
			if(i%M!=M-1)ans+=P[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}