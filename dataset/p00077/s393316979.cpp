#include <string.h>
#include <stdio.h>
int main(void)
{
	char s[200];
	int len;

	while(scanf("%[^\n]%*c",s) != EOF){
		len = strlen(s);
		for(int i = 0; i < len; i++){
			if(s[i] == '@'){
				for(int j = 0; j < s[i + 1] - '0'; j++){
					printf("%c",s[i + 2]);
				}
				i += 2;
			}else{
				printf("%c",s[i]);
			}
		}
		printf("\n");
	}
	return 0;
}