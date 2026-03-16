#include<stdio.h>
#include<algorithm>

int main(){
	int a[3];
	while(scanf("%d%d%d",a,a+1,a+2),a[0]){
		int b,c;
		scanf("%d",&b);
		std::sort(a,a+3);
		int d=a[0]*a[0]+a[1]*a[1];
		for(int i=0;i<b;i++){
			scanf("%d",&c);
			if(d<c*c*4)printf("OK\n");
			else printf("NA\n");
		}
	}
}