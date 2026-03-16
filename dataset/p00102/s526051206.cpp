#include <stdio.h>

int main(void){
	int matrix[11][11],i,j,dataset;
	while(scanf("%d",&dataset)){

		if(dataset==0)break;

		//init add total norm
		for(i=0;i<dataset+1;i++){
			matrix[dataset][i]=0;
			matrix[i][dataset]=0;
		}

		//input and calc
		for(i=0;i<dataset;i++){
			for(j=0;j<dataset;j++){
				scanf("%d",&matrix[i][j]);
				matrix[i][dataset]+=matrix[i][j];
			}
		}

		//calc
		for(j=0;j<dataset+1;j++){
			for(i=0;i<dataset;i++){
				matrix[dataset][j]+=matrix[i][j];
			}
		}

		//output
                for(i=0;i<dataset+1;i++){
                        for(j=0;j<dataset+1;j++){
                                printf("%5d",matrix[i][j]);
                        }
			printf("\n");
                }
	}
}