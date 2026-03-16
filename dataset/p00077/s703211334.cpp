#include <iostream>
#include <string>

using namespace std;

void solve()
{
	string str;
	while(cin >> str)
	{
		int n = str.size();
		for(int i = 0; i < n; ++i)
		{
			if(str[i] == '@')
			{
				int length = str[i + 1] - '0';
				for(int j = 0; j < length; ++j)
				{
					cout << str[i + 2];
				}
				i += 2;
			}
			else
			{
				cout << str[i];
			}
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}