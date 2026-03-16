#include <iostream>
using namespace std;
int main()
{
	int prime[10000];
	bool num[110000]; for(int i=0;i<110000;i++) num[i]=false;
	num[0]=num[1]=true;
	for(int i=2;i<110000;i++)
	{
		if(num[i]==true) continue;
		for(int j=i*2;j<110000;j+=i) num[j]=true;
	}
	int pnt=0;
	for(int i=0;i<110000;i++)
	{
		if(num[i]==false) prime[pnt++]=i;
		if(pnt>=10000) break;
	}
	//以上が素数の列挙
	int n;
	while(1)
	{
		cin >> n ; if(n==0) break;
		int sum=0;
		for(int i=0;i<n;i++) sum+=prime[i];
		cout << sum << '\n' ;
	}
}