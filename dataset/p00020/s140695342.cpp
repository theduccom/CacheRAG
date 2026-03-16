#include <stdio.h>
#include <ctype.h>

int main(){
	int i;
	char str;
	while(1){
		str = getchar();
		if(str == '\n') break;
		if(str >= 'a' && str <= 'z') str -= 32;
		printf("%c",str);
	}
	printf("\n");
	return 0;
}