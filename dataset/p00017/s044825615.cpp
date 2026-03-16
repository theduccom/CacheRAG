#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)

int main() {
	while(1) {
		char str[10000] = {0};
		if(gets(str) == NULL) break;
		rep(i,26) {
			if(strstr(str, "the") || strstr(str, "this") || strstr(str, "that")) break;
			for(int j = 0; j < strlen(str); j++) {	
				if(isalpha(str[j])) {
					str[j] != 'z' ? str[j]++ : str[j] = 'a';
				}
			}
		}
		printf("%s\n", str);
	}
	return 0;
}