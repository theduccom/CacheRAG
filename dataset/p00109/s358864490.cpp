#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;

struct RevPolElement
{
	RevPolElement(int type, int n) : type(type), n(n) { }
	int type;
	int n;
};

deque<RevPolElement> make_revpol(char* s)
{
	map<char, int> pr;
	pr['w'] = -1;
	pr['('] = 0;

	pr['+'] = pr['-'] = 1;
	pr['*'] = pr['/'] = 2;
	pr['@'] = 3;

	char* before_unary = "+-*/(";

	deque<RevPolElement> res;
	stack<char> t;
	t.push('w');
	for (int i = 0; s[i] != '='; ++i)
	{
		if (isdigit(s[i]))
		{
			int t = s[i] - '0';
			while (isdigit(s[i+1]))
				t = t*10 + s[++i] - '0';

			res.push_back(RevPolElement(0, t));
		}
		else
		{
			char op = s[i];
			if (op == '-' && (i == 0 || strchr(before_unary, s[i-1])))
				op = '@';

			if (op == ')')
			{
				while (true)
				{
					char topOp = t.top();
					t.pop();
					if (topOp == '(')
						break;
					res.push_back(RevPolElement(1, topOp));
				}
			}
			else if (op == '(')
				t.push(op);
			else
			{
				while (pr[op] <= pr[t.top()])
				{
					res.push_back(RevPolElement(1, t.top()));
					t.pop();
				}
				t.push(op);
			}
		}
	}
	while (t.size() > 1)
	{
		res.push_back(RevPolElement(1, t.top()));
		t.pop();
	}

	return res;
}

int calculate_revpol(deque<RevPolElement> revpol)
{
	stack<int> t;
	while (!revpol.empty())
	{
		if (revpol.front().type)
		{
			char op = revpol.front().n;
			int res;
			if (op == '@')
			{
				res = -t.top();
				t.pop();
			}
			else
			{
				int a, b;
				b = t.top(); t.pop();
				a = t.top(); t.pop();
				if (op == '+')
					res = a + b;
				else if (op == '-')
					res = a - b;
				else if (op == '*')
					res = a * b;
				else if (op == '/')
					res = a / b;
			}

			t.push(res);
		}
		else
			t.push(revpol.front().n);

		revpol.pop_front();
	}

	return t.top();
}

int main()
{
	int n;
	while (cin >> n)
	{
		cin.get();
		while (n--)
		{
			char buf[256];
			cin.getline(buf, sizeof(buf));
			printf("%d\n", calculate_revpol(make_revpol(buf)));
		}
	}

	return 0;
}