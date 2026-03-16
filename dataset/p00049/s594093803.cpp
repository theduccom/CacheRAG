#include <iostream>
#include <string>
using namespace std;

int main()
{
	string t;
	int A = 0, B = 0, AB = 0, O = 0;

	while (cin >> t)
	{
		while (true)
		{
			t.erase(0, 1);
			if (t[0] == ',') break;
		}
		t.erase(0, 1);

		if (t == "A") A++;
		if (t == "B") B++;
		if (t == "AB") AB++;
		if (t == "O") O++;
	}

	cout << A << endl;
	cout << B << endl;
	cout << AB << endl;
	cout << O << endl;

	return 0;
}