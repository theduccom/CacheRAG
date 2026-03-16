#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int ary[100];
	int ans = 0;

	while (cin >> str)
	{
		ans = 0;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == 'I') ary[i] = 1;
			if (str[i] == 'V') ary[i] = 5;
			if (str[i] == 'X') ary[i] = 10;
			if (str[i] == 'L') ary[i] = 50;
			if (str[i] == 'C') ary[i] = 100;
			if (str[i] == 'D') ary[i] = 500;
			if (str[i] == 'M') ary[i] = 1000;
		}

		for (int i = 0; i < str.size() - 1; i++)
		{
			if (ary[i] < ary[i + 1]) ans -= ary[i];
			else					 ans += ary[i];
		}
		ans += ary[str.size() - 1];
		cout << ans << endl;
	}

	return 0;
}