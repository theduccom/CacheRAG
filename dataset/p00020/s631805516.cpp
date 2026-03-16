#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
	int len,cut_i;
	char str[1000];

	scanf("%[a-z .]",str);

	len = strlen(str);

	for(cut_i=0; cut_i<len; cut_i++){
		str[cut_i] = toupper(str[cut_i]);
	}
	
	puts(str);

	return 0;
}