#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int d = a * 4 + b * 2 + c;

	if (d == 1 || d == 6)
	{
		cout << "Open" << endl;
	}
	else
	{
		cout << "Close" << endl;
	}

	return 0;
}