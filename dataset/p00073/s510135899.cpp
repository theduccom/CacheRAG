#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double x, h;
	while(1){
		cin >> x >> h;
		if(x==0 && h==0) break;
		double S = 2*x*sqrt(x*x/4+h*h)+x*x;
		std::cout << std::fixed;
		std::cout << std::setprecision(6) << S << endl;
	}
	return 0;
}
