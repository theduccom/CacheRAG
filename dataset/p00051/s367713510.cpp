#include <cstdio>
#include <cstdlib>
#include <algorithm>
int main()
{
	char buf[16];
	int v[8];
	int n = atoi(fgets(buf, 16, stdin));
	while (n--) {
		fgets(buf, 16, stdin);
		std::sort(buf, buf + 8);
		int a = atoi(buf);
		std::reverse(buf, buf + 8);
		int b = atoi(buf);
		printf("%d\n", b - a);
	}
	return 0;
}