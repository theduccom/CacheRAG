#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define rep(i,n) for(int i=0;i<(int)n;i++)

using namespace std;


int main()
{
	int w;
	cin>>w;
	while(w!=-1)
	{
		int ans=0;
		
		if(1)
		{
			w-=10;
			ans+=1150;
		}
		
		if(w>0)
		{
			
			ans+=125*min(10,w);
			w-=min(w,10);
		}
		
		if(w>0)
		{
			
			ans+=140*min(10,w);
			w-=min(w,10);
		}
		
		if(w>0)
		{
			ans+=w*160;
		}
		
		cout<<4280-ans<<endl;
		
		
		
		
		cin>>w;
	}
}