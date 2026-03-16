#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double s, sum;

	while (cin >> s){
		s *= 3;
		sum = s;
		for (int i = 0; i < 4; i++){
			s *= 2.0 / 3.0;
			sum += s;
		}
		printf("%.7lf\n", sum);
	}
	return (0);
}