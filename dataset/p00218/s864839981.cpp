#include<stdio.h>
int main(void)
{
	int a,s,d,f,i;
	scanf("%d",&a);
	while(a!=0){
		for(i=1;i<=a;i++){
			scanf("%d %d %d",&s,&d,&f);
			if(s==100 || d==100 || f==100){
				printf("A\n");
			}
			else if((s+d+f)/3>=80){
				printf("A\n");
			}
			else if((s+d)/2>=90){
				printf("A\n");
			}
			else if((s+d+f)/3>=70){
				printf("B\n");
			}
			else if((s+d+f)/3>=50 && s>=80 || d>=80){
				printf("B\n");
			}
			else{
				printf("C\n");
			}
		}
	scanf("%d",&a);
	}
	return 0;
}