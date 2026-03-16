#include <iostream>
#include <map>
#include <string>

using namespace std;

void solve()
{
	int a;
	char c[3];
	map<string, int> Map;
	while(~scanf("%d,%2s", &a, c))
	{
		Map[string(c)]++;
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