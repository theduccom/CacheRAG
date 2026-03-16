#include<iostream>
using namespace std;
int main()
{
	int w;
	while(cin>>w)
	{
		bool flag=0;
		for(int i=1;w>0;i*=2)
		{
			if(w%2>0)
			{
				if(flag)
				{
					cout<<' ';
				}
				cout<<i;
				flag=1;
				w--;
			}
			w/=2;
		}
		cout<<endl;
	}
	return 0;
}
