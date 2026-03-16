#include<stdio.h>
#include<memory.h>
int main(){
	int n,i,j,k,e[1000],p[1000],q[1000];
	int c[1000],count=0,count2=0;
	int gokei=0;
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&e[i],&p[i],&q[i]);
			gokei=p[i]*q[i];
			for(j=0;j<i;j++){
				if(e[i]==e[j]){
					gokei+=p[j]*q[j];
				}
			}
			for(k=0;k<count;k++){
				if(e[i]==c[k]){
					goto a;
				}
			}
			if(gokei>=1000000){
				c[count]=e[i];
				count++;
			}
			a:
			gokei=0;
		}
		for(i=0;i<count;i++){
			printf("%d\n",c[i]);
		}
		if(count==0){
			printf("NA\n");
		}
		count=0;
		memset(c,0,sizeof(c));
	}
	
	return 0;
}