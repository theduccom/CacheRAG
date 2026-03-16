#include<iostream>

using namespace std;

int main()
{
	int i;
	double n,v,y;
	
	for(;cin >> n;)
	{
		v=double(n)/9.8;
		y=4.9*v*v;
		for(i=1;5*(i-1)<y;i++)
		{}
		cout << i << endl;
	}
}