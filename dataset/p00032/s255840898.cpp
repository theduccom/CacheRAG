#include <iostream>
using namespace std;
int main()
{
	int a, b, c, n = 0, m = 0;
	char t;
	while (1)
	{
		cin >> a;
		if (cin.eof()) break;
		cin >> t >> b >> t >> c;
		if (a*a + b*b == c*c) n++;
		if (a == b) m++;
	}
	cout << n << endl << m << endl;
}