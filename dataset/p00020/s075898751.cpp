#include <stdio.h>

int main(void)
{
	char str[1024];
	int i;
	
	fgets(str, 1024, stdin);
	i = 0;
	while (str[i] != '\0'){
		if (str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 0x20;
		}
		i++;
	}
	
	printf("%s", str);
	
	return (0);
}