#include<stdio.h>
int main(void)
{
	int w,n,i;
	scanf("%d",&w);
		while(w!=-1){
		n=w-10;
		w=1150;
		if(n>0){
			for(i=0;i<10;i++){
				n--;
				w=w+125;
				if(n==0)  break;
			}
		}
		if(n>0){
			for(i=0;i<10;i++){
				n--;
				w=w+140;
				if(n==0)  break;
			}
		}
		while(n>0){
			n--;
			w=w+160;
			if(n==0)  break;
		}
		w=4280-w;
		printf("%d\n",w);
		scanf("%d",&w);
	}
	return 0;
}