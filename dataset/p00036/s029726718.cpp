#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	char table[8][9];

	while(scanf("%s",table[0])!=EOF){
		for(int i=1;i<8;i++){
			scanf("%s",table[i]);
		}
		getchar();
		bool FLG = false;
		for(int i=0; i < 8; i++){
			for(int k=0; k<8; k++){
				if(table[i][k] == '1'){
					if(i <= 6 && k <= 6 && table[i][k+1] == '1' && table[i+1][k] == '1' && table[i+1][k+1] == '1'){
						printf("A\n");
						FLG = true;
						break;
					}else if(i <= 4 && table[i+1][k] == '1' && table[i+2][k] == '1' && table[i+3][k] == '1'){
						printf("B\n");
						FLG = true;
						break;
					}else if(k <= 4 && table[i][k+1] == '1' && table[i][k+2] == '1' && table[i][k+3] == '1'){
						printf("C\n");
						FLG = true;
						break;
					}else if(i <= 5 && k >= 1 && table[i+1][k-1] == '1' && table[i+1][k] == '1' &&
							table[i+2][k-1] == '1'){
						printf("D\n");
						FLG = true;
						break;
					}else if(i <= 6 && k <= 5 && table[i][k+1] == '1' && table[i+1][k+1] == '1' &&
							table[i+1][k+2] == '1'){
						printf("E\n");
						FLG = true;
						break;
					}else if(i <= 5 && k <= 6 && table[i+1][k] == '1' && table[i+1][k+1] == '1' &&
							table[i+2][k+1] == '1'){
						printf("F\n");
						FLG = true;
						break;
					}else{
						printf("G\n");
						FLG = true;
						break;
					}
				}
			}
			if(FLG)break;
		}

	}


	return 0;
}