#include<iostream>

using namespace std;

int main()
{
	double v1,v2,l[10];
	int i;
	char a;
	
	for(;cin >> l[0];)
	{
		double n=l[0];
		for(i=1;i<10;i++)
		{
			cin >> a >> l[i];
			n+=l[i];
		}
		cin >> a >> v1 >> a >> v2;
		double t;
		t=n/(v1+v2);
		n=v1*t;
		for(i=0;i<10;i++)
		{
			n-=l[i];
			if(0.0==n)
			{
				i++;
				break;
			}
			if(0.0>n)
			{
				i++;
				break;
			}
		}
		cout << i << endl;
	}
}