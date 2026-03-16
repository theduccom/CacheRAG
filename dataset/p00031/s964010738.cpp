#include<iostream>
using namespace std;
int main()
{
	int w;
	while(cin>>w)
	{
		bool flag=0;
		for(int i=1;i<=w;i*=2)
		{
			if(w%(i*2)>0)
			{
				if(flag)
				{
					cout<<' ';
				}
				cout<<i;
				flag=1;
				w-=i;
			}
		}
		cout<<endl;
	}
	return 0;
}


