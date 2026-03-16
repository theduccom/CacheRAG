#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int a,b;
	while(cin >> a >> b){
		if(a==0 && b==0)
			break;
		double x = static_cast<double>(a);
		double h = static_cast<double>(b);
		cout << setprecision(6) << fixed << x*x+2*x*sqrt(x*x/4+h*h) << endl;
	}
	return 0;
}