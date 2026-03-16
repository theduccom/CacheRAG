#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	while(n--)
	{
		string a, b;
		cin >> a >> b;
		string l, s;
		a.size() >= b.size() ? (l = a, s = b) : (l = b, s = a);
		reverse(l.begin(), l.end());
		reverse(s.begin(), s.end());
		string sum;
		
		int sizel = l.size();
		int sizes = s.size();
		int buf = 0;
		for(int i = 0; i < sizes; ++i)
		{
			sum += (l[i] + s[i] - '0' - '0' + buf) % 10 + '0';
			buf = (l[i] + s[i] - 2 * '0' + buf) / 10;
		}
		for(int i = sizes; i < sizel; ++i)
		{
			sum += (l[i] - '0' + buf) % 10 + '0';
			buf = (l[i] - '0' + buf) / 10;
		}
		if(buf > 0)
		{
			sum += buf + '0';
		}
		int size = sum.size();
		if(size > 80)
		{
			cout << "overflow" << endl;
			continue;
		}
		for(int i = size - 1; i >= 0; --i)
		{
			cout << sum[i];
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}