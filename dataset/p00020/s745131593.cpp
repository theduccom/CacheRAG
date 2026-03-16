#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[100];
	int i = 0;

	gets(str);

	while(str[i] != '\0'){
		str[i] = toupper(str[i]);

		i++;
	}

	puts(str);

	return 0;
}