//0052
#include<cstdio>
#include<climits>
using namespace std;

int main(void)
{
	int n;
	int canDiv5;
	int i, j;

	const int a[] = {5, 25, 125, 625, 3125, 15625, 78125, 390625, 1953125, 9765625,
		48828125, 244140625, 1220703125, INT_MAX, /*6103515625, 30517578125*/};

	while(scanf("%d", &n), n)
	{
		canDiv5 = 0;

		for(i = 5; i <= n; i+=5)
		{
			for(j = sizeof(a)/sizeof(a[0])-1; j>=0; j--)
			{
				if(i >= j && i%a[j] == 0)
				{
					canDiv5 += j+1;
					break;
				}
			}
		}

		printf("%d\n", canDiv5);
	}
	return 0;
}