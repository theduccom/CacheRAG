#include <iostream>
#include <string>

using namespace std;

void solve()
{
	string str;
	while(cin >> str)
	{
		for(int i = 0; i < str.size(); ++i)
		{
			if(str[i] == '@')
			{
				for(int j = 0; j < str[i + 1] - '0'; ++j)
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