#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int x,h;
	double S;
	
	while(cin>>x>>h,x|h){
		S = x*x + 2*sqrt(0.25*x*x+h*h)*x;
		printf("%.6lf\n",S);
		
	}
	return 0;
}