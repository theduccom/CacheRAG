#include<iostream>

using namespace std;

int main()
{
	int sum=0,ave=0;
	int i;
	int n,m;
	
	for(i=0;cin >> n;++i)
	{
		char a;
		cin >> a >> m;
		sum+=n*m;
		ave+=m;
	}
	
	if(i!=0)
	{
		double a;
		a=double(ave)/i+0.5;
		ave=a;
		cout << sum << "\n" << ave << endl;
	}
	else
		cout << sum << "\n" << ave << endl;
}