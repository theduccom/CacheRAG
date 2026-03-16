#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

char s[10000];

int main()
{
	gets(s);
	int l = strlen(s);
	for(int i = 0; i < l; i++)
	{
		if('a' <= s[i] && s[i] <= 'z')
		{
			s[i] = (int)s[i] - 'a' + 'A';
		}
	}
	printf("%s\n",s);
	return 0;
}