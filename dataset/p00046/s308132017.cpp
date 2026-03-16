#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	float n=0;
	float min=9999999,max=0;
	while (scanf("%f",&n) != EOF)
	{
		if (max < n){max = n;}
		if (min > n){min = n;}
	}
	cout << max-min << endl;
	return 0;
}