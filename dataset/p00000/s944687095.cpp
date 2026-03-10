#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	for (int a = 1;a < 10;a++) {
		for (int b = 1;b < 10;b++) {
			int c = a*b;
			printf("%d", a);
			printf("x");
			printf("%d", b);
			printf("=");
			printf("%d", c);
			printf("\n");
		}
	}
	return 0;
}
