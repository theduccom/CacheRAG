#include <stdio.h>

int main(void) {
	char ch[2], now = 'A';
	
	
	while(scanf("%c", &ch[0]) != EOF){
		scanf("%c", &ch[1]);
		scanf("%c", &ch[1]);
		
		if(ch[0] == now){
			now = ch[1];
		}
		else if(ch[1] == now){
			now = ch[0];
		}
		
		scanf("%c", &ch[1]);
	}
	
	printf("%c\n", now);
	return 0;
}