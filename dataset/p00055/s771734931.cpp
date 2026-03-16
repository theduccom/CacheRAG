#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	double a, s;

	while (1) {
		cin >> a;
		if (cin.eof())	break;

		s = a;
		for (int i = 0; i < 9; i++) {
			if (i % 2 == 0) {
				s += a * 2;
				a *= 2;
			}
			else {
				s += a / 3;
				a /= 3;
			}
		}

		printf("%.8f\n", s);
	}

	return 0;
}