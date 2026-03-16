#include <stdio.h>
#include <string.h>

int main(void){
	char str[110];

	while(fgets(str, 110, stdin) != NULL){
		str[strlen(str) - 1] = '\0';

		int i = 0;
		while(str[i] != '\0'){
			if(str[i] == '@'){
				i++;
				for(int j=0; j< str[i] - '0'; j++){
					printf("%c", str[i+1]);
				}
				i++;
			}else{
				printf("%c", str[i]);
			}
			i++;
		}
		printf("\n");
	}

	return 0;
}