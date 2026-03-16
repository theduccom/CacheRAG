#include <iostream>
#include <string>
#include <map>

using namespace std;

void solve()
{
	map<char, int> Map;
	Map['I'] = 1;
	Map['V'] = 5;
	Map['X'] = 10;
	Map['L'] = 50;
	Map['C'] = 100;
	Map['D'] = 500;
	Map['M'] = 1000;
	string s;
	while(cin >> s)
	{
		int sum = 0;
		int n = s.size();
		for(int i = 0; i < n; ++i)
		{
			if(i < n - 1 && Map[s[i]] < Map[s[i + 1]])
			{
				sum += Map[s[i + 1]] - Map[s[i]];
				++i;
			}
			else
			{
				sum += Map[s[i]];
			}
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}