#include<iostream>
using namespace std;
bool flag[1000000];
int ans[10001];

int main()
{
	int cnt=1;
	for(int i = 2; i < 1000000; ++i)
	{
		if(!flag[i])
		{
			ans[cnt]=ans[cnt-1]+i;
			cnt++;
			if(cnt==10001) break;
			for(int j = i*2; j < 1000000; j+=i)
			{
				flag[j]=true;
			}
		}
	}
	int n;
	while(cin>>n,n) cout<<ans[n]<<endl;
  return 0;
}