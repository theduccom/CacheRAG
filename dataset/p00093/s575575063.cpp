#include <iostream>
using namespace std;

int main() {
	int a,b;
	int d=0;
	while(1)
	{
		cin>>a>>b;
		if(a==0&&b==0)break;
		else if(d)cout<<endl;
		d=1;
		int c=0;
		for(int i=a;i<=b;i++)
		{
			if(i%4==0)
			{
				if(i%100==0)
				{
					if(i%400==0)
					{
						cout<<i<<endl;
						c++;
					}
				}
				else
				{
					cout<<i<<endl;
					c++;
				}
			}
		}
		if(c==0)cout<<"NA"<<endl;
	}
	return 0;
}