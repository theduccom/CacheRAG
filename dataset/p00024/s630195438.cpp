#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <iostream>


using namespace std;

int main()
{
	double v;
	while (scanf("%lf", &v) != EOF)
		printf("%d\n", (int)(4.9*pow(v/9.8, 2)/5)+2);
	return 0;
}