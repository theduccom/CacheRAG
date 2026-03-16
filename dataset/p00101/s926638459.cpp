#include <iostream>
#include <string>

using namespace std;

void ReplaceStr(string& str, const string& from, const string& to)
{
	string::size_type pos = 0;
	while(pos = str.find(from, pos), pos != string::npos)
	{
		str.replace(pos, from.length( ), to);
		pos += to.length();
	}
}

void solve()
{
	int N;
	scanf("%d\n", &N);
	while(N--)
	{
		string str;
		getline(cin, str);
		string from = "Hoshino";
		string to = "Hoshina";
		ReplaceStr(str, from, to);
		cout << str << endl;
	}
}

int main()
{
	solve();
	return(0);
}