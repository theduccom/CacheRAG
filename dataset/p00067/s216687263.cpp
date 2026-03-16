#include<bits/stdc++.h>
using namespace std;
template<typename T = int>T in() { T x; cin >> x; return x; }
#define REP(i,n) for(int i=0;i<(n);++i)
#define _REP(i,n)for(int i=1;i<=(n);++i)
int main()
{
	while (true)
	{
		char m[14][14];
		REP(i, 14)REP(j, 14)m[i][j] = '0';
		_REP(i, 12)_REP(j, 12)
		{
			m[i][j] = in<char>();
			if (cin.eof())
			{
				return 0;
			}
		}
		int count = 0;
		set<pair<int, int>>s;
		_REP(i, 12)
		{
			_REP(j, 12)
			{
				if (m[i][j] == '1')
				{
					s.insert(make_pair(i, j));
					while (s.size() != 0)
					{
						int y = s.begin()->first, x = s.begin()->second;
						s.erase(s.begin());
						m[y][x] = '0';
						if (m[y - 1][x] == '1')s.insert(make_pair(y - 1, x));
						if (m[y][x - 1] == '1')s.insert(make_pair(y, x - 1));
						if (m[y + 1][x] == '1')s.insert(make_pair(y + 1, x));
						if (m[y][x + 1] == '1')s.insert(make_pair(y, x + 1));
					}
					count++;
				}
			}
		}
		cout << count << endl;
	}
}
