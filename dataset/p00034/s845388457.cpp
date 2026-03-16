#include <iostream>
#include <cstdio>

int main(void)
{
	int l[10],v[2];char c;
	while(~std::scanf("%d%c",&l[0],&c))
	{
		int sum=0;
		for(int i=1; i<10; i++)
			std::scanf("%d%c",&l[i],&c);
		for(int i=0; i<2; i++)
			std::scanf("%d%c",&v[i],&c);
		for(int i=0; i<10; i++)
			sum += l[i];

		double meet = (double)v[0]*((double)sum/(v[0]+v[1]));
		int n;
		for(n=0, sum=0; sum < meet; n++)
			sum += l[n];
		std::cout << n << std::endl;
	}
	return 0;
}