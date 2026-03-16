#include<stdio.h>

int main(){
	while(1){
		int w;
		scanf("%d",&w);
		if(w==-1)return 0;
		int ans=0;
		if(w<=10)ans=1150;
		else if(w<=20)ans=1150+(w-10)*125;
		else if(w<=30)ans=2400+(w-20)*140;
		else ans=3800+(w-30)*160;
		printf("%d\n",4280-ans);
	}
}

		