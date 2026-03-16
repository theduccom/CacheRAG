# define _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <string>
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
# include <set>
# include <map>
# include <stack>
using namespace std;
# define M_PI 3.141592
# define FOR(i,n) for(int i=0;i<(int)n;i++)
# define FORI(i,k,n) for(int i=k;i<(int)n;i++)
# define toRad 2.0*M_PI/360.0
# define inin(x) int x;cin>>x;
# define all(x) x.begin(),x.end()
# define debug(x) cout<<#x<<" :"<<x<<endl;
# define rep(i,n) for(int i=0;i<(int)n;i++)
# define EPS 1e-12
# define pri_max 60000
# define CHECK(i,a) FOR(i,a.size())cout<<#a<<"["<<i<<"] : "<<a[i]<<endl; 
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
bool isOperator(string c)
{
	if (c == "+" || c == "-" || c == "/" || c == "*" || c == "%" || c == "(" || c == ")" || c == "=")return true;
	return false;
}
int op_pri(string c)
{
	if (c == "+" || c == "-")return 2;
	if (c == "(")return -1;
	return 3;
}
long long calc(long long a, long long b, string op)
{
	if (op == "+")return a + b;
	if (op == "-")return a - b;
	if (op == "*")return a * b;
	if (op == "/")return a / b;
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string f; cin >> f;
		vector<string> v;
		string temp;
		for (int i = 0; i < f.size(); i++)
		{
			string now;
			now = f[i];
			if (isOperator(now))
			{
				if (temp != "")v.push_back(temp);
				v.push_back(now);
				temp = "";
			}
			else
			{
				temp += now;
			}
		}

		stack<string> st;
		vector<string> p;

		for (int i = 0; i < v.size() - 1; i++)
		{
			string now = v[i];
			if (isOperator(now))
			{
				if (now == "(")
				{
					st.push(now);
				}
				else if (now == ")")
				{
					while (st.top() != "(")
					{
						p.push_back(st.top());
						st.pop();
					}
					st.pop();
				}
				else
				{
					while (!st.empty())
					{
						if (op_pri(st.top()) >= op_pri(now))
						{
							p.push_back(st.top());
							st.pop();
						}
						else break;
					}
					st.push(now);
				}
			}
			else
			{
				p.push_back(now);
			}
		}
		while (!st.empty()) { p.push_back(st.top()); st.pop(); }

		stack<long long> a;

		for (int i = 0; i < p.size(); i++)
		{
			string now = p[i];
			if (isOperator(now))
			{
				long long v1, v2;
				v2 = a.top(); a.pop();
				v1 = a.top(); a.pop();
				a.push(calc(v1, v2, now));
			}
			else
			{
				a.push(atol(now.c_str()));
			}
		}
		cout << a.top() << endl;

	}
}