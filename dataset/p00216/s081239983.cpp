#include <stdio.h>
int main(){
	int w=1,fee=1150;
	while(1){
		scanf("%d",&w);
		if(w==-1) break;
		if(w>=30) fee += (w-30)*160;
		if(w>=20){
			if((w-20)>=10) fee += 10*140;
			else fee += (w-20)*140;
		}
		if(w>=10){
			if((w-10)>=10) fee += 10*125;
			else fee += (w-10)*125;
		}
		printf("%d\n",4280-fee);
		fee=1150;
	}
	return 0;
}