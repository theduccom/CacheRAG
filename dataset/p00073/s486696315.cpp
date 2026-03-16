#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){

	double x,h;
	double s;
	double skseki;

	while(1){

		cin >> x >> h;

		if(x == 0 && h == 0) break;

		double tei = x * x;
		double skmnh = sqrt((x/2 * x/2) + (h * h));
		
		skseki = (skmnh * x / 2) * 4;
		s = skseki + x * x;

		printf("%6f\n", s);
	}

	return 0;
}