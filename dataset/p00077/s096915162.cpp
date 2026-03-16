//============================================================================
// Name        : 0077.cpp
// Author      : afterCmidday
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <string.h>

int main(void){
	int i, j;
	char str[1024];
	while(scanf("%s",str) != EOF){
		for(i = 0;i < strlen(str);i++){
			if(i + 1 < strlen(str) && str[i] == '@'){
				for(j = 0;j < (str[i + 1] - '0');j++){
					printf("%c",str[i + 2]);
				}
				i += 2;
			}else{
				printf("%c",str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}