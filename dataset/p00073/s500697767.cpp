#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x, h, s;

	cout<<setprecision(6);
	cout<<setiosflags(ios::fixed);
	while (cin>>x>>h, x||h) {
		s = 4.0*x*sqrt(x*x/2.0/2.0+h*h)/2.0 + x*x;
		cout<<s<<endl;
	}

	return 0;
}