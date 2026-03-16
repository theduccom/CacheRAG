#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
	double a, tmp;
	
	while(cin >> a){
		tmp = a;
		a *= 2;
		tmp += a;
		for(int i = 1; i < 5; i++){
			a /= 3;
			tmp += a;
			a *= 2;
			tmp += a;
		}
		
		printf("%.8lf\n", tmp);
	}
	
	return 0;
}