#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int b1 = 0, b2  = 0, b3 = 0;
	cin >> b1 >> b2 >> b3;
	if (b1 == 1)
	{
		if (b2 == 0)
		{
			cout << "Close" << endl;
		}
		if (b2 == 1)
		{
			cout << "Open" << endl;
		}
	}
	else if (b3 == 1)
	{
		cout << "Open" << endl;
	}
	else
	{
		cout << "Close" << endl;
	}
}