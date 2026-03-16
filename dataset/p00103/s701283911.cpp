#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int BS,OT,point;
	string s;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		BS = 0;
		OT = 0;
		point = 0;
		while(OT!=3)
		{
			cin >> s;
			if(s=="HIT")
			{
				BS++;
				if(BS>3)
				{
					point++;
					BS--;
				}
			}
			else if(s=="HOMERUN")
			{
				point+=(1+BS);
				BS=0;
			}
			else
			OT++;
		}
		printf("%d\n",point);
	}
}