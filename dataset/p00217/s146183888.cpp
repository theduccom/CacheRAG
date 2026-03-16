#include<iostream>

using namespace std;

int main()
{
	int n;
	int i;
	
	for(;;)
	{
		cin >> n ;
		if(n==0)
			break;
		
		int ans1,ans2=0;
		for(i=0;i<n;i++)
		{
			int m,a,aa;
			cin >> m >> a >> aa ;
			if(a+aa>ans2)
			{
				ans1=m;
				ans2=a+aa;
			}
		}
		cout << ans1 << " " << ans2 << endl;
	}
}