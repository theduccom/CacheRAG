#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n, i;
	char c[9], mx[9] = "", mn[9] = "";
	while (cin >> n)
	{
		if (cin.eof()) return 0;
		for (i = 0; i < n; i++)
		{
			scanf("%s", &c);
			strcpy(mx, c);
			sort(mx, mx+8, greater<int>());
			strcpy(mn, c);
			sort(mn, mn+8);
			printf("%d\n", atoi(mx) - atoi(mn));
		}
	}
	return 0;
}