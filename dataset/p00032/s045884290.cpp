#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("%lld", &x); return (x); }

int main()
{
	int rectNum = 0;
	int rhomNum = 0;
	int a;
	int b;
	int c;
	while( scanf("%d,%d,%d", &a, &b, &c) != EOF )
	{
		if( a == b )
		{
			rhomNum++;
		}
		if( a * a + b * b == c * c )
		{
			rectNum++;
		}
	}
	printf("%d\n%d\n", rectNum, rhomNum);
	return (0);
}