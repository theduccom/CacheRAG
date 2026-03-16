#include<cstdio>
#include<cmath>
#include <stdlib.h>

float spase(float a,float b,float c){
	return sqrt((a+b+c)*(b-a+c)*(a-b+c)*(a+b-c));
}

int main(){
	int b[9][9],i,j,a[8];
	for(i=0;i<8;i++){
		b[i][8]=0;
		b[8][i]=0;
	}
	while( scanf("%d",&a[0]) != EOF ){
		for(i=1;i<8;i++){
			scanf("%d",&a[i]);
				
		}
		for(j=0;j<8;j++){
			for(i=0;i<8;i++){
				b[i][7-j]=a[i]%10;
				a[i] /= 10;
			}
		}
		for(i=0;b[i/8][i%8]==0;i++){
		}
		j=i%8;
		i=i/8;
		if(b[i+1][j]&&b[i][j+1]&&b[i+1][j+1]){
			printf("A\n");
		}
		if(b[i+1][j]&&b[i+2][j]&&b[i+3][j]){
			printf("B\n");
		}
		if(b[i][j+1]&&b[i][j+2]&&b[i][j+3]){
			printf("C\n");
		}
		if(b[i+1][j]&&b[i+1][j-1]&&b[i+2][j-1]){
			printf("D\n");
		}
		if(b[i][j+1]&&b[i+1][j+1]&&b[i+1][j+2]){
			printf("E\n");
		}
		if(b[i+1][j]&&b[i+1][j+1]&&b[i+2][j+1]){
			printf("F\n");
		}
		if(b[i+1][j]&&b[i+1][j-1]&&b[i][j+1]){
			printf("G\n");
		}
	}
	return 0;
}