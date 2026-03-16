#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

bool era[50030];
int main()
{
	for(int i=2;i<300;i++)if(!era[i])for(int j=i*i;j<50030;j+=i)era[j]=true;
	vector<int> p;
	for(int i=2;i<50030;i++)if(!era[i])p.push_back(i);

	int n;
	while(~scanf("%d",&n)){
		vector<int>::iterator it_l,it_u;
		it_l=it_u=upper_bound(p.begin(),p.end(),n);
		it_l-=era[n]?1:2;
		printf("%d %d\n",*it_l,*it_u);
	}

	return 0;
}