#include<iostream>
using namespace std;
int main()
{
	int W;
	while(cin>>W)
	{
		bool flag=0;
		for(int i=1;i<=W;i*=2)
		{
			if(W/i%2>0)
			{
				if(flag)
				{
					cout<<' ';
				}
				cout<<i;
				flag=1;
				W-=i;
			}
		}
		cout<<endl;
	}
	return 0;
}
