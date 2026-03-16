#include <stdio.h>
#include <string.h>

int main(void){
	char s[1001];
	char* p;
	char* a;
	fgets(s, 1001, stdin);
	s[strlen(s)-1] = '\0';

	p = strstr(s, "peach");
	a = strstr(s, "apple");
	while(1){
		if(p == NULL && a == NULL) break;
		if(a == NULL || p < a && p != NULL){
			p[0] = 'a';
			p[1] = 'p';
			p[2] = 'p';
			p[3] = 'l';
			p[4] = 'e';
			p = strstr(p, "peach");
		}else if(p == NULL || a < p && a != NULL){
			a[0] = 'p';
			a[1] = 'e';
			a[2] = 'a';
			a[3] = 'c';
			a[4] = 'h';
			a = strstr(a, "apple");
		}
	}
	printf("%s\n", s);

	return 0;
}