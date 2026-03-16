#include <iostream>
#include <map>
#include <string>

using namespace std;

void solve()
{
	int a;
	string s;
	map<string, int> Map;
	while(~scanf("%d,", &a))
	{
		cin >> s;
		++Map[s];
	}
	cout << Map["A"] << endl;
	cout << Map["B"] << endl;
	cout << Map["AB"] << endl;
	cout << Map["O"] << endl;
}

int main()
{
	solve();
	return(0);
}