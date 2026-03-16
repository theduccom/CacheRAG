#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	pair<int,int>p[10000],t;
	int n,a,b,c,i;
	while(scanf("%d",&n),n)
	{
		for(i=0;i<n;++i)scanf("%d%d%d",&a,&b,&c),p[i].first=b+c,p[i].second=a;
		t=*max_element(p,p+n);
		printf("%d %d\n",t.second,t.first);
	}
	return 0;
}