#include<stdio.h>
int main(){
	int field[8][8];
	int a,b;
	for(;;){
		for(b=0;b<8;b++){
			for(a=0;a<8;a++){if(scanf("%1d",&field[a][b]) == EOF){break;}}
			if(a!=8){break;}
		}
		if(b!=8){break;}
		for(b=0;b<8;b++){
			for(a=0;a<8;a++){
				if(field[a][b] == 1){
					if(field[a][b] == 1 && field[a+1][b] == 1 && field[a][b+1] == 1 && field[a+1][b+1] == 1){printf("A\n");break;}
					else if(field[a][b] == 1 && field[a][b+1] == 1 && field[a][b+2] == 1 && field[a][b+3] == 1){printf("B\n");break;}
					else if(field[a][b] == 1 && field[a+1][b] == 1 && field[a+2][b] == 1 && field[a+3][b] == 1){printf("C\n");break;}
					else if(field[a][b] == 1 && field[a][b+1] == 1 && field[a-1][b+1] == 1 && field[a-1][b+2] == 1){printf("D\n");break;}
					else if(field[a][b] == 1 && field[a+1][b] == 1 && field[a+1][b+1] == 1 && field[a+2][b+1] == 1){printf("E\n");break;}
					else if(field[a][b] == 1 && field[a][b+1] == 1 && field[a+1][b+1] == 1 && field[a+1][b+2] == 1){printf("F\n");break;}
					else if(field[a][b] == 1 && field[a+1][b] == 1 && field[a][b+1] == 1 && field[a-1][b+1] == 1){printf("G\n");break;}
				}
			}
			if(a!=8){break;}
		}
	}
	return 0;
}