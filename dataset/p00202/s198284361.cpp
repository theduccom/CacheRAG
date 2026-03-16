#include<stdio.h>
#include <string.h>
int isPrime(int x){
	int i;
	if(x<2) return 0;
	else if(x==2) return 1;
	if(x%2==0) return 0;
	for(i=3;i*i<=x;i+=2){
		if(x%i==0) return 0;
	}
	return 1;
}
int p,cnt,cnt2,food;
int n,d=0,g,kakaku[31],flag,youso[1000001]={0};
int main()
{
	scanf("%d %d",&n,&p);
	while(1){
		memset(kakaku, 0, sizeof(kakaku));
		memset(youso, 0, sizeof(youso));
		if(n==0&&p==0){
			break;
		}
		for(cnt=1;cnt<=n;cnt++){
			scanf("%d",&food);
			youso[food]=1;
			kakaku[cnt]=food;
		}
		for(cnt=0;cnt<=p;cnt++){
			if(youso[cnt]==1){
				for(cnt2=1;cnt2<=n;cnt2++){
					if(cnt+kakaku[cnt2]<=p){
						youso[cnt+kakaku[cnt2]]=1;
					}
				}
			}
		}
		flag=0;
		for(cnt=p;cnt>=0;cnt--){
			if(youso[cnt]==1){
				g=cnt;
				d=isPrime(g);
				if(d==1){
					flag=1;
					d=cnt;
					printf("%d\n",d);
					break;
				}
			}
		}
		if(flag==0){
			printf("NA\n");
		}
		d=0;
		flag=0;
		
		scanf("%d %d",&n,&p);
	}
	return 0;
}