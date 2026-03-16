#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	bool cup[3] = { true, false, false };
	string p;

	while (cin >> p)
	{
		swap(cup[p[0] - 'A'], cup[p[2] - 'A']);
	}
	for (int i = 0; i < 3; i++)
	{
		if (cup[i]) cout << char(i + 'A') << endl;
	}

	return 0;
}