#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	double ma=0,mi=1000000000.0;
	double a;
	
	for(;cin >> a;)
	{
		ma=max(ma,a);
		mi=min(mi,a);
	}
	cout << ma-mi << endl;
}