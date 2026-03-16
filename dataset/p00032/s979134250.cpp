#include <iostream>

using namespace std;

bool Rectangle(int a, int b, int c)
{
	return a * a + b * b == c * c;
}

bool Diamond(int a, int b, int c)
{
	return a == b;
}

int main()
{
	int a, b, c, sum1 = 0, sum2 = 0; char ch;

	while (cin >> a >> ch >> b >> ch >> c)
	{
		if (Rectangle(a, b, c)) sum1++;

		if (Diamond(a, b, c)) sum2++;
	}

	cout << sum1 << endl << sum2 << endl;

	return 0;
}