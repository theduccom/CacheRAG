#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int len;
	int f;
	int n;
	char str[128];
	
	while (fgets(str, 100, stdin) != NULL){
		f = 0;
		n = 0;
		while (1){
			len = strlen(str);
			for (i = 0; i < len; i++){
				if (strncmp(&str[i], "the", 3) == 0){
					f = 1;
				}
				if (strncmp(&str[i], "this", 4) == 0){
					f = 1;
				}
				if (strncmp(&str[i], "that", 4) == 0){
					f = 1;
				}
			}
			if (f == 1){
				break;
			}
			for (i = 0; i < len; i++){
				if (str[i] >= 'a' && str[i] < 'z'){
					str[i]++;
				}
				else if (str[i] == 'z'){
					str[i] = 'a';
				}
			}
			n++;
		}
		printf("%s", str);
	}
	return (0);
}