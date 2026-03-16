#include<iostream>

using namespace std;

int main()
{
	int w,ans;
	
	for(;;)
	{
		cin >> w ;
		if(w==-1)
			break;
		ans=3130;
		
		if(w>30)
		{
			ans-=1250+1400;
			ans-=(w-30)*160;
		}
		else if(w>20)
		{
			ans-=1250;
			ans-=(w-20)*140;
		}
		else if(w>10)
			ans-=(w-10)*125;
		
		cout << ans << endl;
	}
}