#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>


using namespace std;


int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		char a[1024], b[1024];
		scanf(" %s %s", a, b);
		if (strlen(a) > 80 || strlen(b) > 80)
		{
			puts("overflow");
			continue;
		}
		int aa[80], bb[80];
		memset(aa, 0, sizeof(aa));
		memset(bb, 0, sizeof(bb));
		for (int j = 0; j < strlen(a); ++j)
			aa[j] = a[strlen(a)-j-1] - '0';
		for (int j = 0; j < strlen(b); ++j)
			bb[j] = b[strlen(b)-j-1] - '0';

		int sum[81];
		memset(sum, 0, sizeof(sum));
		for (int j = 0; j < 80; ++j)
		{
			sum[j] += aa[j]+bb[j];
			sum[j+1] = sum[j]/10;
			sum[j] %= 10;
		}
		if (sum[80])
			puts("overflow");
		else
		{
			int d;
			for (d = 80; sum[d] == 0 && d > 0; --d)
				;
			for (; d >= 0; --d)
				printf("%d", sum[d]);
			printf("\n");
		}
	}

	return 0;
}