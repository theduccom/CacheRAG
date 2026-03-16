#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("%lld", &x); return (x); }

int main()
{
	int point;
	bool isRunner[3];
	int out;
	int n;
	char event[8];

	n = in();
	loop(i, 0, n)
	{
		point = 0;
		out = 0;
		isRunner[0] = isRunner[1] = isRunner[2] = false;

		while( out < 3 )
		{
			scanf("%s", event);
			switch( event[1] )
			{
				case 'I':
					if( isRunner[2] )
					{
						point++;
					}
					isRunner[2] = isRunner[1];
					isRunner[1] = isRunner[0];
					isRunner[0] = true;
					break;
				case 'O':
					point++;
					if( isRunner[0] )
					{
						point++;
					}
					isRunner[0] = false;
					if( isRunner[1] )
					{
						point++;
					}
					isRunner[1] = false;
					if( isRunner[2] )
					{
						point++;
					}
					isRunner[2] = false;
					break;
				case 'U':
					out++;
					break;
			}
		}
		printf("%d\n", point);
	}

	return (0);
}