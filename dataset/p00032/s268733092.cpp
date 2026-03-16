#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int a2, b2, c2;
	int num = 0, num1 = 0;
	char dot, dot1;

	while ( cin >> a >> dot >> b >> dot1 >> c )
	{
		a2 = a * a;
		b2 = b * b;
		c2 = c * c;

		if ( a == b )
		{
			if ( a2 + b2 != c2 )
				num1 = num1 + 1;
		}
		else 
		{
			if ( a2 + b2 == c2 )
				num = num + 1;
		}
	}

	cout << num << endl;
	cout << num1 << endl;

	return 0;
}