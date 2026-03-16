#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while (1)
    {
	double x,h;
	cin >> x >> h;
	if (x==0)break;
	printf("%.6f\n", x*x+2.0*x*sqrt(x*x/4.0+h*h));
    }
    return 0;
}