//0052
//nÌKæÌlÌöÌ0ÌÂð¦æ
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
		//µ©µAOOêÎ¦ÀÉoé¶á èÜ¹ñ©
		//http://www3.ocn.ne.jp/~fukiyo/math-qa/kaijou.htm
		canDiv5 = 0;
		for(i = 0; i < sizeof(a)/sizeof(a[0]); i++)
			canDiv5 += n/a[i];
		printf("%d\n", canDiv5);
	}
	return 0;
}