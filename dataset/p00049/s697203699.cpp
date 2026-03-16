#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int t;
	string s;
	char c;
	map<string,int> d;
	while (cin >> t >> c >> s)
	{
		if (d.find(s) == d.end())
			d[s] = 1;
		else
			d[s]++;
	}

	cout << d["A"] << endl;
	cout << d["B"] << endl;
	cout << d["AB"] << endl;
	cout << d["O"] << endl;
}