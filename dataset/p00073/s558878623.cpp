#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

int main(){
	double x,h;
	double sum_pow;
	double height,sum;

	cin >> x >> h;

	while(x != 0 && h != 0){
		sum_pow = (x/2)*(x/2) + h*h;
		height = sqrt(sum_pow);
		sum = x * x + x * height * 2;

		printf("%lf\n",sum);

		cin >> x >> h;
	}

}