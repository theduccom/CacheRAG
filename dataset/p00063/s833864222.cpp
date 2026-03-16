#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void)
{
	int c, n = 0;
	char s1[100], s2[100];
	
	while (scanf("%s", s1) != EOF){
		c = 0;
		for (int i = 0; i <= strlen(s1); i++){
			s2[i] = s1[i];
		}
		
		reverse(s2, s2 + strlen(s1));
		for (int i = 0; i <= strlen(s1); i++){
			if (s1[i] == s2[i]){
				c++;
				if (c == strlen(s1)){
					n++;
				}
			}
		}
	}
	
	printf("%d\n", n);
	
	return (0);
}