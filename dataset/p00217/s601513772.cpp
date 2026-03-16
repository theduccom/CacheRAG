#include <stdio.h>
int main(){
	while(1){
		int n,max=0,a,b,p,tmp;
		scanf("%d",&n);
		if(!n) break;
		for(int i=0;i<n;i++){
			scanf("%d%d%d",&tmp,&a,&b);
			if(max<a+b){
				max=a+b;
				p=tmp;
			}
		}
		printf("%d %d\n",p,max);
	}
	return 0;
}