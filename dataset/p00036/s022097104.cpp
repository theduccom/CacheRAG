#include <stdio.h>
int main(){
	char c[100][100];
	bool f;
	while(scanf("%s",c[0])!=EOF){
		f=true;
		for(int i=1;i<8;i++)scanf("%s",c[i]);
		for(int i=0;i<8&&f;i++)for(int j=0;j<8&&f;j++){
			if(c[i][j]=='1'){
				f=false;
				if(c[i][j+1]=='1'){
					if(c[i][j+2]=='1')printf("C\n");
					else if(c[i+1][j]=='1'){
						if(c[i+1][j+1]=='1')printf("A\n");
						else printf("G\n");
					}
					else printf("E\n");
				}
				else if(c[i+2][j]=='1')printf("B\n");
				else if(c[i+2][j+1]=='1')printf("F\n");
				else printf("D\n");
			}
		}
	}
}