#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

bool match(char c, string s)
{
	rep(i, 0, s.length()) if (s[i] == c) return true;
	return false;
}

string op[2] = { "+-", "*/" };

int parse(string s, int &i, int x)
{
	if (x == 2)
	{
		if (s[i] == '(')
		{
			i++;
			int ans = parse(s, i, 0);
			i++;
			return ans;
		}
		else
		{
			int ret = 0;
			while ('0' <= s[i] && s[i] <= '9')
			{
				ret = ret * 10 + s[i] - '0';
				i++;
			}
			return ret;
		}
	}
	else
	{
		int ans = parse(s, i, x + 1);

		while (op[x].find(s[i]) != string::npos)
		{
			switch (s[i])
			{
			case '+': i++; ans += parse(s, i, x + 1); break;
			case '-': i++; ans -= parse(s, i, x + 1); break;
			case '*': i++; ans *= parse(s, i, x + 1); break;
			case '/': i++; ans /= parse(s, i, x + 1); break;
			}
		}

		return ans;
	}
}

int main()
{
	int n; cin >> n;
	rep(_n, 0, n)
	{
		string s; cin >> s;
		int i = 0;
		cout << parse(s, i, 0) << endl;
	}
}