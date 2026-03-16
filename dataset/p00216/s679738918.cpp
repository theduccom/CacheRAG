#include<iostream>

using namespace std;

int main()
{
	int n;
	int i;
	
	for(;;)
	{
		cin >> n ;
		if(n==-1)
			break;
		
		int ans=0;
		
		if(n>=30)
		{
			ans+=(n-30)*160;
			ans+=1400;
			ans+=1250;
			ans+=1150;
		}
		else if(n>=20)
		{
			ans+=(n-20)*140;
			ans+=1250;
			ans+=1150;
		}
		else if(n>=10)
		{
			ans+=(n-10)*125;
			ans+=1150;
		}
		else
			ans=1150;
		cout << 4280-ans << endl;
	}
}