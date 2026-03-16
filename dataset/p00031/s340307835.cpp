#include<iostream>
using namespace std;
main()
{
	int a;
	while(cin>>a)
	{
		int f=0;
		for(int i=1;i<=a;i*=2)if(i&a)cout<<(f++?" ":"")<<i;
		cout<<endl;
	}
}
