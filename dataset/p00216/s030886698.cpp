#include<stdio.h>
int main(void){
	int w;
	while(1){
		int fee=1150;
		scanf("%d",&w);
		if(w==-1)break;
		if(w>10){
			w-=10;
			if(w>10)fee+=125*10;
			else fee+=125*w;
			if(w>10){
				w-=10;
				if(w>10)fee+=140*10;
				else fee+=140*w;
				if(w>10){
					w-=10;
					fee+=160*w;
				}
			}

		}
		printf("%d\n",4280-fee);
	}
	return 0;
}