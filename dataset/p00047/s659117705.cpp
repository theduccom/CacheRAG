#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	char c1, c2;
	char ans = 'A';

	while (scanf("%c,%c", &c1, &c2) != EOF)
	{
		if (c1 == ans) ans = c2;
		else if (c2 == ans) ans = c1;
	}

	cout << ans << endl;

	return 0;
}