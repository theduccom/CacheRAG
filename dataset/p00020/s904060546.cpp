#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<functional>

using namespace std;

char s[210];

int main()
{
	scanf("%[^\n]", s);
	for (int i = 0; i < strlen(s); i++) {
		printf("%c",toupper(s[i]));
	}
	printf("\n");

	
	return 0;
}