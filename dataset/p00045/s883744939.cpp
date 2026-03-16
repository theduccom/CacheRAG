#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{
	int a,b;
	vector<int>tanka,suryou;
	while(scanf("%d,%d",&a,&b)!=EOF)
	{
		tanka.push_back(a);
		suryou.push_back(b);
	}
	ll sum=0,s=0;
	double ave1;
	int ave;
	for(int i=0;i<tanka.size();i++)
	{
		sum += tanka[i]*suryou[i];
	}
	for(int i=0;i<suryou.size();i++)
	{
		s += suryou[i];
	}
	ave1 = (double)s/(double)(suryou.size());
	ave = (int)(ave1+0.5);
	printf("%lld\n",sum);
	printf("%d\n",ave);
	return 0;
}