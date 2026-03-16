#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char s[1000];
	
	while(scanf("%s", s) != EOF){
		
		int len = strlen(s);
		
		for(int i = 0; i < len; i++){
			if(s[i] == '@'){
				int j = s[i+1] - '0';
				while(j-- > 0){
					printf("%c", s[i+2]);
				}
				i+=2;
			}
			else printf("%c", s[i]);
		}
		puts("");
	}
	
	return(0);
}