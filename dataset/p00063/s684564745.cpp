#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
	string s;
	int ans = 0;
	while(cin >> s)
	{
		string sBuf = s;
		reverse(s.begin(), s.end());
		if(s == sBuf)
		{
			++ans;
		}
	}
	cout << ans << endl;
}

int main()
{
	solve();
	return(0);
}