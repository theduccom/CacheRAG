#include<stdio.h>
int a[10];
int v1,v2;
int main(){
	while(~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",a,a+1,a+2,a+3,a+4,a+5,a+6,a+7,a+8,a+9,&v1,&v2)){
		int s=0;
		for(int i=0;i<10;i++)s+=a[i];
		double t=(double)s*(double)(v1)/(double)(v1+v2);
		double now=0;
		int ret=1;
		for(int i=0;i<10;i++){
			now+=a[i];
			if(now<t)ret++;
		}
		printf("%d\n",ret);
	}
}