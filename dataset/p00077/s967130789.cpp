#include <stdio.h>
#include <string.h>

int main(void)
{
	int len;
	int i, j, k;
	char str[128];
	
	while (fgets(str, 128, stdin) != NULL){
		len = strlen(str);
		for (i = 0; i < len; i++){
			if (str[i] == '@'){
				i++;
				for (k = 0; k < str[i] - '0'; k++){
					printf("%c", str[i + 1]);
				}
				i++;
			}
			else {
				printf("%c", str[i]);
			}
		}
//		printf("\n");
	}
	
	return (0);
}