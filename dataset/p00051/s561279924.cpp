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
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		char buf[9];
		scanf("%s\n", buf);
		sort(buf, buf+8);
		int minVal = atoi(buf);
		sort(buf, buf+8, greater<char>());
		int maxVal = atoi(buf);
		printf("%d\n", maxVal-minVal);
	}

	return 0;
}