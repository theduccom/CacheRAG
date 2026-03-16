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
		
		int ans[16]={0};
		
		for(i=0;i<n;i++)
		{
			int a;
			cin >> a ;
			ans[a]++;
		}
		
		for(i=0;i<10;i++)
		{
			if(ans[i]==0)
			{
				cout << "-" << endl;
			}
			else
			{
				for(int j=0;j<ans[i];j++)
				{
					cout << "*" ;
				}
				cout << endl;
			}
		}
	}
}