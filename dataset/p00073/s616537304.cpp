#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	int x, h;
	double x2;
	double X, H;
	double S;
	
	while (1){
		x = 0;
		h = 0;
		x2 = 2.0;
		
		cin >> x >> h;
		
		if (x == 0 && h == 0){
			break;
		}
		
		X = x * x;
		x2 = x / x2;
		H = sqrt(x2 * x2 + h * h);
		
//		cout << X << " " << x2 << " " << H << endl;
		
		S = X + (H * x2) * 4;
		
		printf("%f\n", S);
	}
}