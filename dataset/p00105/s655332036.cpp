#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <climits>
#include <cfloat>

typedef long long ll;

using namespace std;

int main()
{
	int p;
	string s;
	map<string, set<int> > b;
	while (cin >> s >> p)
		b[s].insert(p);

	for (map<string, set<int> >::iterator i = b.begin(); i != b.end(); ++i)
	{
		string w = i->first;
		cout << w << endl;
		set<int>& t = i->second;
		for (set<int>::iterator it = t.begin(); it != t.end(); ++it)
		{
			if (it != t.begin())
				cout << " ";
			cout << *it;
		}
		cout << endl;
	}

	return 0;
}