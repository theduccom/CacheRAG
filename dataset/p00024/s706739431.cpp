#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double x;
	
	while(scanf("%lf", &x) != EOF){
		x = x / 9.8;
		x = x * x * 4.9;
		int i;
		for(i = 1; i * 5 - 5 < x; i++);
		cout << i << endl;
	}
	return 0;
}