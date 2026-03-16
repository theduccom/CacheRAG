#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,r,n) for(int i=r;i<(int)n;i++)
using namespace std;
int in(){int x;cin>>x;return x;}

int main()
{
	int a,b,c;
	int ans1=0,ans2=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF)
	{
		if(a==b)ans1++;
		if(c==sqrt(a*a+b*b))ans2++;
	}
	cout<<ans2<<endl<<ans1<<endl;



}