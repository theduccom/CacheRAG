#include <string>
#include <iostream>
using namespace std;

const char a = 'a', z = 'z', la = 'A';

string conv(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= a && s[i] <= z)
		{
			s[i] = la + (s[i] - 'a');
		}
	}
	return s;
}

int main()
{
	string s;
	getline(cin, s);
	cout << conv(s) << endl;
	return 0;
}