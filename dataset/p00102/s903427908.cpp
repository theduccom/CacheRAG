#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int i,j,hyo[11][11],n,wa[11],wa2[11],sum;
	while(1) {
		scanf("%d",&n);
		if(n==0)  break;
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) scanf("%d",&hyo[i][j]);
		}
		for(i=0;i<n;i++) {
			sum=0;
			for(j=0;j<n;j++) sum+=hyo[i][j];
			wa[i]=sum;
		}
		for(i=0;i<n;i++) {
			sum=0;
			for(j=0;j<n;j++) sum+=hyo[j][i];
			wa2[i]=sum;
		}
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				printf("%5d",hyo[i][j]);
			}
			printf("%5d",wa[i]);
			printf("\n");
		}
		sum=0;
		for(i=0;i<n;i++) {
			printf("%5d",wa2[i]);
			sum+=wa2[i];
		}
		printf("%5d\n",sum);
	}
	return 0;
}