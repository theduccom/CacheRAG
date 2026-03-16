#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

using P = pair<string, int>;

int main()
{
	P p[100];
	int i = 0;
	while (cin >> p[i].first >> p[i].second) i++;
	int n = i;

	sort(p, p + n);
	for (int i = 0; i < n; i++)
	{
		cout << p[i].first << endl << p[i].second;
		while (p[i].first == p[i + 1].first)
		{
			i++;
			cout << ' ' << p[i].second;
		}
		cout << endl;
	}

	return 0;
}