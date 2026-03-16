#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	int i;
	char s[1024], temp;
	for (i = 0; (temp = getchar()) != '\n'; i++) {
		if (temp <= 'z' && temp >= 'a') {
			s[i] = temp + ('A' - 'a');
		}
		else {
			s[i] = temp;
		}
	}
	s[i] = EOF;
	for (i = 0; s[i] != EOF; i++)
		printf("%c", s[i]);
	printf("\n");
	return 0;
}