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


using namespace std;


int main()
{
	int sum = 0;
	double aveSum = 0;
	int cost, sales;
	int n = 0;
	while (scanf("%d,%d", &cost, &sales) != EOF)
	{
		sum += cost * sales;
		aveSum += sales;
		++n;
	}
	printf("%d\n%d\n", sum, (int)(aveSum/n+0.5));

	return 0;
}