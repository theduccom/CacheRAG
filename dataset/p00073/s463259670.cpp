#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
	int x, h;
	double x1, S;
	
	while(1) {
		std::cin >> x >> h;
		if(!x && !h) break;
		
		x1 = sqrt( (double)(h*h) + (double)(x*x)/4.0 );
		
		S = (double)(x*x) + (x1*x)*2.0;
		
		//std::cout << S << std::endl;
		std::printf("%.6f\n", S);
	}
	return 0;
}