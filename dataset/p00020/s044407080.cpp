#include<iostream>
#include<string>
using namespace  std;

int main()
{
	string s;
	while (getline(cin,s))
	{
		string ss = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ' || s[i] == '.')
			{
				ss += s[i];
			}
			else
			{
				ss += (s[i] - ' ');
			}
		}
		cout << ss << endl;
	}
	return 0;
}