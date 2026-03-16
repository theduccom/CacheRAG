#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i;
	double a, sum;
	cout<<setprecision(8);
	cout<<setiosflags(ios::fixed);
	while (cin>>a) {
		sum = 0.0;
		for (i = 1; i <= 10; i++) {
			sum += a;
			if (i&1) a *= 2.0;
			else a /= 3.0;
		}
		cout<<sum<<endl;
	}
}