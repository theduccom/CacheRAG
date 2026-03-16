#include <iostream>
#include <stdio.h>
#include <cstdio>
using namespace std;

int main()
{
	double p, q;
	double price = 0, quantity = 0, amount = 0;

	while (scanf("%lf,%lf", &p, &q) != EOF) {
		price += (p * q);
		quantity += q;
		amount++;
	}

	cout << (int)price << endl;
	cout << (int)(quantity / amount + 0.5) << endl;

	return 0;
}
