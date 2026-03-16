#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	double a;
	while(1) {
		cin >> a;
		if(cin.eof()) break;
		printf("%.8f\n", 211.0 / 27.0 * a);
	}
	return 0;
}