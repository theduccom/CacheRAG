#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>

struct staff_data{
	int num,price,volume;
	unsigned long long int total;
};

int main(void){

	int n,i,j,hantei;
	int num,price,volume;
	struct staff_data dt[4000]={0};
	
	/*srand((unsigned)time(NULL));*/
	
	while(scanf("%d",&n)!=0){
	
		if(n==0){
			break;
		}
		
		for(i=0;i<4000;i++){
			dt[i].num=0;
			dt[i].price=0;
			dt[i].total=0;
			dt[i].volume=0;
		}
		
		for(i=0;i<n;i++){
			
			scanf("%d %d %d",&num,&price,&volume);
			/*num=rand()%4000;
			price=rand()%1000000;
			volume=rand()%100000;
			printf("%5d %5d %5d ||",num,price,volume);*/
			
			for(j=0;j<=i;j++){
				
				if(dt[j].num==num || dt[j].num==0){
					
					dt[j].num=num;
					dt[j].total=(price)*(volume)+dt[j].total;
					/*printf("num==%5d total==%d\n",dt[j].num,dt[j].total);*/
					break;
				}
				
			}
		}

		hantei=0;

		for(j=0;j<n;j++){
		
			if(dt[j].total>=1000000){
				printf("%d\n",dt[j].num);
				hantei=1;
			}
		}
	
		if(hantei==0){
			printf("NA\n");
		}

	}

	return 0;
}

	