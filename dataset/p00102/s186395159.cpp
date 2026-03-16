#include<stdio.h>

int b[11][11];
int main(){
	int a;
	while(scanf("%d",&a),a){
		for(int i=0;i<a;i++)
			for(int j=0;j<a;j++)
				scanf("%d",&b[i][j]);
		
		for(int i=0;i<a;i++){
			for(int j=0;j<a;j++){
				b[i][a]+=b[i][j];
			}
		}
		for(int i=0;i<a;i++)
			for(int j=0;j<a;j++)
				b[a][i]+=b[j][i];
		
		for(int i=0;i<a;i++)
			b[a][a]+=b[i][a];
		
		for(int i=0;i<a+1;i++,printf("\n"))
			for(int j=0;j<a+1;j++)
				printf("%5d",b[i][j]);
		for(int i=0;i<a+1;i++)
			for(int j=0;j<a+1;j++)
				b[i][j]=0;
	}
}