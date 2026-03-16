#include<stdio.h>
int main(void)
{
	int n;
	long long int kai;
	int i;
	int cnt;
	
	scanf("%d",&n);
	while(n!=0){
		kai=1;
		cnt=0;
		for(i=n;i>0;i--){
			kai=kai*i;
		//	printf("kai=%d\n",kai);
			while(kai%10==0){
				cnt++;
				kai=kai/10;
			}
			kai=kai%100000;
		}
		printf("%d\n",cnt);
		scanf("%d",&n);
	}
	return 0;
}