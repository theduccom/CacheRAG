#include <cstdio>
#include <cstring>
char buf[1024];
int main()
{
	int i = 0;
	fgets(buf, 1024, stdin);
	while (i < strlen(buf)) {
		if (!strncmp(buf + i, "apple", 5)) { printf("peach"); i += 5; }
		else if (!strncmp(buf + i, "peach", 5)) { printf("apple"); i += 5; }
		else { putchar(buf[i]); ++i; }
	}
	return 0;
}