#include <iostream>
using namespace std;

int main()
{	
	int a, b, c, r = 0, s = 0;
	char d;

	while (cin >> a >> d >> b >> d >> c) {
		if (a * a + b * b == c * c)
			r++;

		if (a == b)
			s++;
	}

	cout << r << endl << s << endl;

	return 0;
}

