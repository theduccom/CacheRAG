#include<stdio.h>
int main(void)
{
	int ct,map[10][10],answer[11][11];
	while(1){
		scanf("%d",&ct);
		if(ct==0){
			return 0;
		}
		for(int f1=0;f1<11;f1++){
			for(int f2=0;f2<11;f2++){
				answer[f1][f2]=0;
			}
		}
		for(int f1=0;f1<ct;f1++){
			for(int f2=0;f2<ct;f2++){
				scanf("%d",&map[f1][f2]);
				answer[f1][f2]=map[f1][f2];
			}
		}
		for(int f1=0;f1<ct;f1++){
			for(int f2=0;f2<ct;f2++){
				answer[f1][ct]+=map[f1][f2];
				answer[ct][f1]+=map[f2][f1];
			}
		}
		for(int f1=0;f1<ct;f1++){
			answer[ct][ct]+=answer[f1][ct];
		}
		for(int f1=0;f1<ct+1;f1++){
			for(int f2=0;f2<ct+1;f2++){
				printf("%5d",answer[f1][f2]);
			}
			printf("\n");
		}
	}
	return 0;
}