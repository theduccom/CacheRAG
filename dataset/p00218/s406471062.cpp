#include<stdio.h>
#include<string.h>
int main(void)
{
	int a,s,d,f,g[10001],h,i,j;
	scanf("%d",&a);
	while(a!=0){
		for(i=1;i<=a;i++){
			scanf("%d %d %d",&s,&d,&f);
			if(s==100||d==100||f==100){
				g[i]=1;
			}
			else if((s+d)/2>=90){
				g[i]=1;
			}
			else if((s+d+f)/3>=80){
				g[i]=1;
			}
			else if((s+d+f)/3>=70){
				g[i]=2;
			}
			else if((s+d+f)/3>=50&&s>=80||d>=80){
				g[i]=2;
			}
			else{
				g[i]=3;
			}
		}
		for(i=1;i<=a;i++){
			if(g[i]==1){
				printf("A\n");
			}
			if(g[i]==2){
				printf("B\n");
			}
			if(g[i]==3){
				printf("C\n");
			}
		}
		scanf("%d",&a);
	}
	return 0;
}