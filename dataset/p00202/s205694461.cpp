#include<stdio.h>
int a,b,c[1000001],d[31],e[1000001],i,j,m;
int main(void)
{
	scanf("%d %d",&a,&b);
	while(a!=0 && b!=0){
		m=0;
		for(i=0;i<a;i++){
			scanf("%d",&d[i]);
		}
		for(i=0;i<=b;i++){
			c[i]=0;
			e[i]=1;
		}
		c[0]=1;
		for(i=0;i<a;i++){
			for(j=0;j<=b;j++){
				if(c[j]==1 && j+d[i]<=b){
					c[j+d[i]]=1;
				}
			}
		}
		for(i=2;i*i<=b;i++){
			if(e[i]==1){
				for(j=i;j<=b;j=j+i){
					e[j]=0;
				}
			}
		}
		for(i=2;i<=b;i++){
			if(m<i && c[i]==1 && e[i]==1){
				m=i;
			}
		}
		if(m==0){
			printf("NA\n");
		}
		else{
			printf("%d\n",m);
		}
		scanf("%d %d",&a,&b);
	}
	return 0;
}