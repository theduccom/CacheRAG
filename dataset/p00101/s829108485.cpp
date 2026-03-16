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
	int n;
	cin >> n;
	cin.get();
	while (n--)
	{
		string s;
		getline(cin, s);
		int i;
		while ((i = s.find("Hoshino")) != string::npos)
			s[i + 6] = 'a';
		cout << s << endl;
	}

	return 0;
}