#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;


int main()
{
	char pos = 'A';
	char a, b;
	while (scanf("%c,%c", &a, &b) != EOF)
	{
		if (pos == a)
			pos = b;
		else if (pos == b)
			pos = a;
	}
	printf("%c\n", pos);

	return 0;
}