#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	while(1){
		double X, Ha;
		cin >> X >> Ha;
		if (X== 0 && Ha == 0)
		{
			break;
		}
		double x = (double)X;
		double h = (double)Ha;
		double S, H;
		H = sqrt(x * x + x * x) / 2;
		H = sqrt(H * H + h * h);
		H = sqrt(H * H - x * x / 4);
		S = x * x + x * H * 2;
		printf("%.10f\n", S);
	}	
}