#include<iostream>

using namespace std;

int main()
{
	int a,b;
	int year[4096];
	int i;
	
	for(i=0;i<3001;i++)
	{
		if((i%4==0 && i%100!=0) || i%400==0)
			year[i]=1;
		else
			year[i]=0;
	}
	int flag=0;
	for(;;)
	{
		cin >> a >> b ;
		if(a==0 && b==0)
			break;
		
		if(flag==1)
			cout << endl;
		flag=1;
		int flag2=0;
		for(i=a;i<=b;i++)
		{
			if(year[i]==1)
			{
				flag2=1;
				cout << i << endl;
			}
		}
		if(flag2!=1)
			cout << "NA" << endl;
	}
}