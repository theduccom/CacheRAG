#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<stack>
#include<deque>
#include<map>
#include<utility>
using namespace std;
int main(void)
{
	map<char, int> priority;
	priority['*'] = 30;
	priority['/'] = 30;
	priority['+'] = 10;
	priority['-'] = 10;
	priority['('] = 0;
	priority[')'] = 0;
	char str[128], *p,*next;
	int v, n;

	scanf("%d", &n);
	while(n--)
	{
		scanf("%s",str);
		deque<pair<char,int> > source;	
		stack<char> subStack;

		p = str;
		while(*p)
		{
			if(isdigit(*p))
			{
				v = strtol(p, &next, 10);
				source.push_back(make_pair('\0', v));
				p = next;
			}
			else
			{
				switch(*p)
				{
				case '(':
					subStack.push(*p);
					break;
				case ')':
					while(subStack.top() != '(')
					{
						source.push_back(make_pair(subStack.top(),0));
						subStack.pop();
					}
					subStack.pop();
					break;
				case '*':
				case '/':
				case '+':
				case '-':
					while(!subStack.empty() && priority[*p] <= priority[subStack.top()])
					{
						source.push_back(make_pair(subStack.top(),0) );
						subStack.pop();
					}
					subStack.push(*p);
					break;
				case '=':
					break;
				}
				++p;
			}
		}
		while(!subStack.empty())
		{
			source.push_back(make_pair(subStack.top(),0));
			subStack.pop();
		}
		stack<int> s;
		while(!source.empty())
		{
			if(source.front().first)
			{
				int lhv, rhv;
				rhv = s.top();s.pop();
				lhv = s.top();s.pop();
				switch(source.front().first)
				{
				case '+': s.push(lhv+rhv); break;
				case '-': s.push(lhv-rhv); break;
				case '*': s.push(lhv*rhv); break;
				case '/': s.push(lhv/rhv); break;
				}
			}
			else s.push(source.front().second);
			source.pop_front();
		}
		printf("%d\n", s.top());
		s.pop();
	}
	return 0;
}