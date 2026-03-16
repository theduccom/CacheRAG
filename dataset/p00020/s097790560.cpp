#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void solve()
{
	string str;
	getline(cin, str);
	for(int i = 0; i < str.size(); ++i)
	{
		printf("%c", toupper(str[i]));
	}
	cout << endl;
}

int main()
{
	solve();
	return(0);
}