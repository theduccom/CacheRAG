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
	while (true)
	{
		int n;
		scanf("%d\n", &n);
		if (n == 0)
			break;

		int t = 0;
		while (n >= 5)
		{
			n /= 5;
			t += n;
		}
		printf("%d\n", t);
	}

	return 0;
}