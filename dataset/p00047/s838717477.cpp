#include<iostream>
using namespace  std;

int main()
{
	char c[4];
	int cups[] = { 1, 0, 0 };
	while (cin >> c)
	{
		int tmp = cups[c[0] - 'A'];
		cups[c[0] - 'A'] = cups[c[2] - 'A'];
		cups[c[2] - 'A'] = tmp;
	}
	for (int i = 0; i < 3; i++)
	{
		if (cups[i] == 1)cout << (char)('A' + i) << endl;
	}
	return 0;
}