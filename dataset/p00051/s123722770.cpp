#include<stdio.h>
int main(void)
{
	int n;
	int suu;
	int a,b,c;
	int i,j,k,temp;
	int dai[9],syo[9];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&suu);
		for(j=0;j<8;j++){
			dai[j]=suu%10;
			syo[j]=suu%10;
			suu=suu/10;
		}
		for(j=0;j<7;j++){
			for(k=j+1;k<8;k++){
				if(dai[j]<dai[k]){
					temp=dai[j];
					dai[j]=dai[k];
					dai[k]=temp;
				}
				if(syo[j]>syo[k]){
					temp=syo[j];
					syo[j]=syo[k];
					syo[k]=temp;
				}
			}
		}
		c=10000000;
		a=b=0;
		for(j=0;j<8;j++){
			a+=dai[j]*c;
			b+=syo[j]*c;
			c=c/10;
		}
	//	printf("%08d\n",b);
	//	printf("%08d\n",a);
		printf("%d\n",a-b);
	}
	return 0;
}