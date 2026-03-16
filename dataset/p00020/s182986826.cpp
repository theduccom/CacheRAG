#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <iostream>


using namespace std;

int main()
{
	char s[1024];
	fgets(s, 1024, stdin);
	for (int i = 0; s[i] != '\0'; ++i)
		s[i] = toupper(s[i]);
	printf("%s", s);

	return 0;
}