#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int i,j,n,max,mx;
	int flg[10001];
	while(1) {
		scanf("%d",&n);
		if(n==0) break;
		for(i=2;i<=n;i++) flg[i]=1;
		for(i=2;i*i<=n;i++) {
			if(flg[i]==1) for(j=2;j*i<=n;j++) flg[i*j]=0;
		}
		max=-1;
		for(i=n;i>=5;i--)	{
			if(flg[i]==1 && flg[i-2]==1)	break;
		}
		max=i-2;
//		for(i=2;i<n;i++) {
//			if(flg[i]==1 && flg[i]==flg[i+2] && i+2<=n) {
//				if(max<i) max=i;
//			}
//		}
		printf("%d %d\n",max,max+2);
	}
	return 0;
}
		