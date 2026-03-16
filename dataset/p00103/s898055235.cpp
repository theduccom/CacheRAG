#include <iostream>
#include <vector>
#include <utility>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int score=0;
		int a=0,b=0,c=0;
		for(int out=0;out<3;)
		{
			string s;cin>>s;
			if(s=="HIT")
			{
				score+=c;
				c=b;
				b=a;
				a=1;
			}
			else if(s=="HOMERUN")
			{
				score+=a+b+c+1;
				a=b=c=0;
			}
			else
			{
				out++;
			}
		}
		cout<<score<<endl;
		
	}
}