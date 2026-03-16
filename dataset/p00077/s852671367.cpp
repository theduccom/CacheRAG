#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[101];
	while(scanf("%s",str)!= EOF){
		int a;
		
		if(str[0] == -1){
			break;
		}
		
		for(int i = 0; str[i] != '\0'; i++){
			if(str[i] == '@'){
				for(int j = 0; j < str[i+1]-49; j++){
					printf("%c",str[i+2]);
				}
				i+=2;
			}
			printf("%c",str[i]);
		}
		puts("");
	}
	return 0;
}