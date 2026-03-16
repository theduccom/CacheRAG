#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#define rep(i,n) for(int i=0;i<(int)n;i++)

using namespace std;


int main()
{
	int n;
	cin>>n;
	for(;n!=0;cin>>n)
	{
		int a[10]={};
		rep(i,n)
		{
			int x;
			cin>>x;
			a[x]++;
		}
		
		rep(i,10)
		{
			if(a[i]==0)
			{
				cout<<"-"<<endl;
				continue;
			}
			rep(k,a[i])
			{
				cout<<"*";
			}
			cout<<endl;
			
		}
		
	}
}