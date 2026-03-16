#include <cstdio>
#include <cstring>

int main(void)
{
	int N;
	char c;

	scanf("%d", &N);
	scanf("%c", &c);
	while(--N, N>=0){
		char instr[1001];
		char *t;

		gets(instr);
		while( (t = strstr(instr, "Hoshino")) != NULL){
			t += 6;
			*t = 'a';
		}

		printf("%s\n", instr);
	}


	return 0;
}