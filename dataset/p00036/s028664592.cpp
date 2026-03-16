#include <cstdio>
using namespace std;

int main(){
	char ch[10][10];
	bool judged;
	
	while((scanf("%s", ch[0])) != EOF){
		for(int i = 1; i < 8; i++){
				scanf("%s", ch[i]);
		}
		
		judged = false;
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				if(ch[i][j] == '1'){
					//A
					if(i + 1 < 8 && ch[i + 1][j] == '1' &&
					 j + 1 < 8 && ch[i][j + 1] == '1' &&
					 ch[i + 1][j + 1] == '1'){
						printf("A\n");
						judged = true;
						break;
					}
					//B
					if(i + 3 < 8 && ch[i + 1][j] == '1' &&
					 ch[i + 2][j] == '1' && ch[i + 3][j] == '1'){
						printf("B\n");
						judged = true;
						break;
					}
					//C
					if(j + 3 < 8 && ch[i][j + 1] == '1' &&
					 ch[i][j + 2] == '1' && ch[i][j + 3] == '1'){
						printf("C\n");
						judged = true;
						break;
					}
					//D
					if(i + 2 < 8 && j - 1 >= 0 &&
					 ch[i + 1][j - 1] == '1' && ch[i + 1][j] == '1' &&
					 ch[i + 2][j - 1] == '1'){
						printf("D\n");
						judged = true;
						break;
					}
					//E
					if(i + 1 < 8 && j + 2 < 8 &&
					 ch[i][j + 1] == '1' && ch[i + 1][j + 1] == '1' &&
					 ch[i + 1][j + 2] == '1'){
						printf("E\n");
						judged = true;
						break;
					}
					//F
					if(i + 2 < 8 && j + 1 < 8 &&
					 ch[i + 1][j] == '1' && ch[i + 1][j + 1] == '1' &&
					 ch[i + 2][j + 1] == '1'){
						printf("F\n");
						judged = true;
						break;
					}
					//G
					if(i + 1 < 8 && j + 1 < 8 && j - 1 >= 0 &&
					 ch[i + 1][j] == '1' && ch[i][j + 1] == '1' &&
					 ch[i + 1][j - 1] == '1'){
						printf("G\n");
						judged = true;
						break;
					}
				}
			}
			
			if(judged) break;
		}
	}
	
	return 0;
}