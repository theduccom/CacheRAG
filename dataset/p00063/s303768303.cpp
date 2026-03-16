#include <stdio.h>
#include <string.h>

int main(void){
	char str[200];
	int cnt = 0;

	while(scanf("%s", str) != EOF){
		int i, j;
		for(i=0, j=strlen(str)-1; i<=j; i++, j--){
			if(str[i] != str[j]) break;
		}
		if(i > j) cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}