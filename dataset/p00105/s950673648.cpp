#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
	map< string, vector<int> > m;
	int n, i;
	string s;
	while (cin >> s)
	{
		if (cin.eof()) break;
		cin >> n;
		m[s].push_back(n);
	}
	map< string, vector<int> >::iterator it = m.begin();
	while (it != m.end())
	{
		cout << (*it).first << endl;
		sort((*it).second.begin(), (*it).second.end());
		for (i = 0; i < (*it).second.size(); i++)
		{
			cout << (*it).second[i];
			if (i < (*it).second.size()-1)
				cout << " ";
			else
				cout << endl;
		}
		it++;
	}
}