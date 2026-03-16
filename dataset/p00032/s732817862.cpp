#include <stdio.h>

int main()
{	
	int a, b, c;
	int rect = 0, rhom = 0;
	while (scanf("%d,%d,%d", &a, &b, &c) != -1)
	{
		if (a * a + b * b == c * c) rect++;
		if (a == b) rhom++;
	}
	printf("%d\n%d\n", rect, rhom);

	return 0;
}