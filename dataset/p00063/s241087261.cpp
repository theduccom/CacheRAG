#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int cnt = 0;
	string s, rs;
	while (cin>>s)
	{
		rs = s;
		reverse(rs.begin(), rs.end());
		if (s==rs)
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}