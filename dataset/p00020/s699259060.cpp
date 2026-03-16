#include <stdio.h>
#include <ctype.h>

int main(void){
	char buff[8192];
	char *p;

	gets(buff);
	p=buff;
	while(*p!='\0'){
		*p=toupper(*p);
		p++;
	}
	printf("%s\n",buff);
}