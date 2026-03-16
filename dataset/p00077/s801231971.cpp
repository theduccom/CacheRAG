#include<stdio.h>

int main()
{
	int i,j;
	char str[108];
	while(scanf("%s",str) != EOF){
		for(i=0;;i++){
			if(str[i]=='\0'){
				puts("");
				break;
			}
			else if(str[i]=='@'){
				for(j=0;j<str[i+1]-49;j++){
					printf("%c",str[i+2]);
				}
				i++;
			}
			else{
				printf("%c",str[i]);
			}
			
		}
	}
	return 0;
}