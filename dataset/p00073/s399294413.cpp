#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	double x, h;
	
	while(1){
		cin >> x >> h;
		if(x == 0 && h == 0)    break;
		
		printf("%.6f\n", ((x*x) + x * sqrt(4*h*h + x*x)));
	}
	
	return 0;
}