#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int s1, s2, s3;
	int re = 0, rh = 0;

	while (scanf("%d,%d,%d", &s1, &s2, &s3) != EOF)
	{
		if (s1*s1 + s2*s2 == s3*s3) re++;
		if (s1 == s2) rh++;
	}

	cout << re << "\n" << rh << endl;

	return 0;
}