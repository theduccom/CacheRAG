#include <iostream>
#include <string>

using namespace std;

void Replace(string& str, string from, string to)
{
	string::size_type pos;
	while(pos = str.find(from), pos != str.npos)
	{
		str.replace(pos, from.length(), to);
		pos += to.length();
	}
}

void solve()
{
	string str;
	getline(cin, str);
	Replace(str, "apple", "hogehoge");
	Replace(str, "peach", "apple");
	Replace(str, "hogehoge", "peach");
	cout << str << endl;
}

int main()
{
	solve();
	return(0);
}