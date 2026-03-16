#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int i,j,n;
	int ban,tan,buy,flg,ff[4001];
	long long int sum[4001];
	while(1) {
		scanf("%d",&n);
		if(n==0) break;
		flg=0;
		for(i=0;i<4000;i++) {
			ff[i]=0;
			sum[i]=0;
		}
		for(i=0;i<n;i++) {
			scanf("%d %d %d",&ban,&tan,&buy);
			sum[ban]+=(long long)tan*buy;
			if(sum[ban]>=1000000) {
				flg=1;	
				if(ff[ban]==0) {
					ff[ban]=1;
					printf("%d\n",ban);
				}
			}
		}
		if(flg==0) printf("NA\n");
	}
	return 0;
}