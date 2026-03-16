#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){

	int x;
	int h;
	while(cin>>x>>h&&!(x==0&&h==0)){
		double S=x*x;
		S+=2*x*sqrt(h*h+(double)x*x/4);
		printf("%.10f\n",S);
	}

	return 0;
}