#include <stdio.h>

int main(void)
{
	int i,a,b;
	bool year [3001]={0},s=0;
	
	for(i=1; i<3000; i++){
		if(i % 4 == 0){
			year[i] = 1;
		}
	}
	
	for(i=100; i<3000; i+=100){
		year[i] = 0;
	}
	for(i=400; i<3000; i+=400){
		year[i] = 1;
	}
	while(1){
		bool flag=0;
		scanf("%d %d", &a, &b);
		if(a==0){
			break;
		}
		if(s==1)puts("");
		s=1;
		for(i=a;i<=b;i++){
			if(year[i] == 1){
				printf("%d\n",i);
				flag=1;
			}
		}
		if(flag==0)printf("NA\n");
	}
	
	return 0;
}