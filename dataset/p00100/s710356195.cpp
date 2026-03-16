#include<cstdio>
#include<algorithm>

using namespace std;
int main(void)
{
	int n;
	while(scanf("%d",&n))
	{
		if(n == 0) break;
		long long int flag[4001] = {0},shain[4001] = {0},junban[4000] = {0};
		long long int shains,tanka,kosu,j = 0;
		long long int flags = 0;
		for(int i = 0;i < n;i++)
		{
			scanf("%lld%lld%lld",&shains,&tanka,&kosu);
			if(flag[shains] == 0)
			{
				flag[shains] = 1;
				junban[j] = shains;
				shain[shains] = tanka * kosu;
				j++;
			}
			else
			{
				shain[shains] += tanka * kosu;
			}
		}

		for(int i = 0;i < n;i++)
		{
			if(shain[junban[i]] >= 1000000)
			{
				printf("%lld\n",junban[i]);
				flags = 1;
			}
		}
		if(flags == 0) printf("NA\n");
	}
	return 0;
}