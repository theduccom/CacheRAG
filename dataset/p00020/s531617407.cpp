#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char buf[256];
	int  i;
	
	fgets(buf, sizeof(buf), stdin);
	
	for (i=0; i<strlen(buf); i++) {
		putchar(toupper(buf[i]));
	}
	
	return 0;
}