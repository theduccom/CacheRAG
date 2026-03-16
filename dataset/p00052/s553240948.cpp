#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("%lld", &x); return (x); }

int getNumOfX(int value, int x)
{
	int result = 0;
	int raw_value = value;
	while( value % x == 0 )
	{
		value /= x;
		result++;
	}
	return result;
}

int main()
{
	int numOfFive;
	int numOfTwo;
	int n;

	while( true )
	{
		n = in();
		if( n == 0 )break;

		numOfFive = 0;
		numOfTwo = 0;
		for(int i = 1; i <= n; i++)
		{
			numOfFive += getNumOfX(i, 5);
			numOfTwo += getNumOfX(i, 2);
		}
		printf("%d\n", numOfFive > numOfTwo ? numOfTwo : numOfFive);
	}
	return (0);
}