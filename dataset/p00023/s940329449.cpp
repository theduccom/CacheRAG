#include <iostream>
#include <complex>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		complex<double> a,b;
		double ra,rb;
		cin>>a.real()>>a.imag()>>ra>>b.real()>>b.imag()>>rb;

		if(ra>rb&&abs(a-b)<(ra-rb)) cout<<2<<endl;
		else if(ra<rb&&abs(a-b)<(rb-ra)) cout<<-2<<endl;
		else if(abs(a-b)>(ra+rb)) cout<<0<<endl;
		else cout<<1<<endl;
	}
	return 0;
}