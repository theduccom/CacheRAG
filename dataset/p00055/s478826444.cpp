#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	while(1)
	{
		double a,ans;
		if(!(cin>>a))break;
		ans=a;
		for(int i=1;i<10;i++)
		{
			if(i%2==1)
			{
				a*=2;
			}
			else
			{
				a/=3;
			}
			ans+=a;
		}
		cout<<fixed<<setprecision(8)<<ans<<endl;
	}
}