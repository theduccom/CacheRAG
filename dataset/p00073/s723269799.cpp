#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(int argc, char const* argv[])
{
	double x,h,S;

	while( cin >> x >> h && x != 0 ){
		double x2 = x/2;
		double l = sqrt( x2 * x2 + h * h );
		S = l * x * 2 + x * x;
		printf("%.6f\n",S);
	}
	return 0;
}