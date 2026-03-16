#include <iostream>

int main()
{
	int d,w,h;
	int n;
	int r;
	while (true) {
		std::cin >> d >> w >> h;
		if (d==0 && w==0 && h==0) break;
		
		int a,b;
		if (d>w && d>h) {a = w; b = h;}
		else if (w>d && w>h) {a = d; b = h;}
		else {a = w; b = d;}
		
		std::cin >> n;
		for (int i=0; i<n; i++) {
			std::cin >> r;
			if (4*r*r > a*a + b*b) {
				std::cout << "OK" << std::endl;
			} else {
				std::cout << "NA" << std::endl;
			}
		}
	}

	return 0;
}


