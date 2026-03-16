#include<stdio.h>

int main(){
	while(1){
		int n,p,d1,d2;
		scanf("%d",&n);
		if(n==0)return 0;
		int an_n;
		int an_d=0;
		for(int i=0;i<n;i++){
			scanf("%d %d %d",&p,&d1,&d2);
			if(d1+d2>an_d){
				an_n=p;
				an_d=d1+d2;
			}
		}
		printf("%d %d\n",an_n,an_d);
	}
}

		