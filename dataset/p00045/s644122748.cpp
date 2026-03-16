#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int m, n;
	int ans = 0, cnt = 0; double a = 0;
	while (scanf("%d,%d", &m, &n) != EOF)
	{
		ans += m*n;
		a += n;
		cnt++;
	}
	a = a / cnt + 0.5;
	printf("%d\n%d\n", ans, (int)a);
}