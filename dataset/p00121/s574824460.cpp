# define _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <string>
# include <bitset>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <cstdio>
# include <cstring>
# include <cstdlib>
# include <iomanip>
# include <queue>
# include <sstream>
# include <climits>
# include <cmath>
# include <list>
# include <functional>
# include <string>
# include <ctime>
# include <set>
# include <map>
# include <stack>
# include <unordered_map>
using namespace std;
//# define M_PI 3.141592
# define INF ((int)(1<<30))
# define FOR(i,n) for(int i=0;i<(int)n;i++)
# define FORI(i,k,n) for(int i=k;i<(int)n;i++)
# define toRad 2.0*M_PI/360.0
# define inin(x) int x;cin>>x;
# define all(x) x.begin(),x.end()
# define debug(x) cout<<#x<<" :"<<x<<endl;
# define rep(i,n) for(int i=0;i<(int)n;i++)
# define EPS 1e-12
# define CHECK(i,a) FOR(i,a.size())cout<<#a<<"["<<i<<"] : "<<a[i]<<endl; 
unordered_map<string, int> m;
struct p
{
	string s;
	int n;
	int x, y;
	int z()
	{
		return x + y * 4;
	}
	int z(int X, int Y)
	{
		return X + Y * 4;
	}
};
int main()
{
	p f;
	f.s = "01234567";
	f.n = f.x = f.y = 0;
	queue<p> que;
	que.push(f);

	while (!que.empty())
	{
		p now = que.front(); que.pop();
		if (m.count(now.s))continue;
		m[now.s] = now.n;
		now.n++;
		if (now.x <= 2)
		{
			swap(now.s[now.z()], now.s[now.z()+1]);
			now.x++;
			que.push(now);
			now.x--;
			swap(now.s[now.z()], now.s[now.z() + 1]);
			
		}
		if (now.x >= 1)
		{
			swap(now.s[now.z()], now.s[now.z() - 1]);
			now.x--;
			que.push(now);
			now.x++;
			swap(now.s[now.z()], now.s[now.z() - 1]);
			
		}
		swap(now.s[now.z()], now.s[now.z(now.x,(now.y+1)%2)]);
		now.y++;
		now.y %= 2;
		que.push(now);
		swap(now.s[now.z()], now.s[now.z(now.x, (now.y + 1) % 2)]);
		now.y++;
		now.y %= 2;
	}

	string s;
	while (getline(cin, s))
	{
		stringstream ss(s);
		string ans;
		while (ss >> s)ans += s;
		cout << m[ans] << endl;
	}
}