#include <iostream>
#include <string>
using namespace std;

const string a = "Hoshino";
const string b = "Hoshina";
int n;
string str;

int main()
{
	cin >> n;
	cin.get();
	while (n--)
	{
		getline(cin, str);
		for (int i = 0; i <= (int)str.size() - (int)a.size(); i++)
		{
			if (str.substr(i, a.size()) == a) str.replace(i, b.size(), b);
		}
		cout << str << endl;
	}

	return 0;
}