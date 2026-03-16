#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("%lld", &x); return (x); }

int main()
{
	int x;
	int h;
	while( 1 )
	{
		scanf("%d%d", &x, &h);
		if( x == 0 && h == 0 )break;

		printf("%f\n", (x * x) + sqrt( (x * x / 4.0) + h * h ) * x * 2);
	}
	return (0);
}