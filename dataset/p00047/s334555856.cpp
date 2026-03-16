#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char X, Y, P = 'A';

	while (scanf("%c,%c", &X, &Y) != EOF)
	{
		if (X == P)
		{
			P = Y;
		}
		else if (Y == P)
		{
			P = X;
		}
	}

	printf("%c\n", P);

	return 0;
}