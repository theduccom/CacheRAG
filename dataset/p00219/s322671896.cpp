#include<stdio.h>
#include<stdlib.h>
int d[10];

int main(){
	while(1){
		int n,i,a;
		scanf("%d",&n);
		if(n==0)return 0;
		for(i=0;i<10;i++)d[i]=0;
		for(i=0;i<n;i++){
			scanf("%d",&a);
			d[a]++;
		}
		for(i=0;i<10;i++){
			for(int k=0;k<d[i];k++)printf("*");
			if(d[i]==0)printf("-");
			printf("\n");
		}
	}
}

		