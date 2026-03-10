#include"iostream"
using namespace std;
int main()
{
	int a, b, c;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			c = a*b;
			cout << a << "x" << b << "=" << c << endl;
		}
	}
	return 0;
}