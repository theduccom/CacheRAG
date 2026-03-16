#include<cstdio>

int main(){
	char c;
	while(scanf("%c", &c) + 1){
		if('a' <= c && c <= 'z'){
			c += 'A' - 'a';
		}
		printf("%c", c);
	}
}