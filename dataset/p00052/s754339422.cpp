#include<iostream>
#include<math.h>

using namespace std;

int main(void)
{
	for(;;)
	{
		int a;
		cin>>a;
		if(a==0)break;
		int ans=0;
		for(int j=5;j<=a;j+=5)
		{
			for(int k=j;k%5==0;k/=5)
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}