#include<stdio.h>

int main(){
	char masu[15][15];
	int i,j;
	
	while(scanf("%c", &masu[0][0]) != EOF){
		for(i=1;i<9;i++)scanf("%c", &masu[0][i]);
		
		for(i=1;i<8;i++){
			for(j=0;j<9;j++){
				scanf("%c", &masu[i][j]);
			}
		}
		scanf("%c", &masu[15][15]);
		for(i=0;i<8;i++){
			for(j=0;j<8;j++){
				if(masu[i][j]=='1'   && masu[i+1][j]=='1' && masu[i][j+1]=='1'   && masu[i+1][j+1]=='1')puts("A");
				if(masu[i][j]=='1'   && masu[i+1][j]=='1' && masu[i+2][j]=='1'   && masu[i+3][j]=='1')  puts("B");
				if(masu[i][j]=='1'   && masu[i][j+1]=='1' && masu[i][j+2]=='1'   && masu[i][j+3]=='1')  puts("C");
				if(masu[i][j+1]=='1' && masu[i+1][j]=='1' && masu[i+2][j]=='1'   && masu[i+1][j+1]=='1')puts("D");
				if(masu[i][j]=='1'   && masu[i][j+1]=='1' && masu[i+1][j+1]=='1' && masu[i+1][j+2]=='1')puts("E");
				if(masu[i][j]=='1'   && masu[i+1][j]=='1' && masu[i+1][j+1]=='1' && masu[i+2][j+1]=='1')puts("F");
				if(masu[i][j+1]=='1' && masu[i+1][j]=='1' && masu[i][j+2]=='1'   && masu[i+1][j+1]=='1')puts("G");
			}
		}
	}
	return 0;
}