#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void)
{
	double max,min;

	max = 0;
	min = 999999999;

	double data;
	while( cin >> data ){
		if( data > max ) max = data;
		if( data < min ) min = data;
	}

	printf("%.1f\n",max - min );

	return 0;
}