#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int p;
string expr;

int parseInt()
{
	int ret=0;
	while(isdigit(expr[p]))
	{
		ret*=10;
		ret+=expr[p]-'0';
		p++;
	}
	
	return ret;
}

char parseChr()
{
	char ret=expr[p];
	p++;
	
	return ret;
}

int calc(stack<int>& num, stack<char>& sta)
{
	int r=num.top(); num.pop();
	int l=num.top(); num.pop();
	char e=sta.top(); sta.pop();
	
	if(e=='+') return l+r;
	if(e=='-') return l-r;
	if(e=='*') return l*r;
	
	return l/r;
}

int main()
{
	int N;
	
	map<char, int> tab;
	tab.insert(make_pair('+',1));
	tab.insert(make_pair('-',1));
	tab.insert(make_pair('*',2));
	tab.insert(make_pair('/',2));
	tab.insert(make_pair('(',3));
	tab.insert(make_pair(')',-3));
	
	cin >> N;
	while(N--)
	{	
		p=0;
		cin >> expr;
		
		int nc=0;
		stack<char> sta;
		stack<int> cnt;
		stack<int> num;
		while(expr[p]!='=')
		{
			if(isdigit(expr[p]))
			{
				num.push(parseInt());
			}
			else
			{
				char c=parseChr();
				if(c=='('||c==')') nc+=tab[c];
				else
				{
					while(!sta.empty())
					{
						if(cnt.top()+tab[sta.top()] >= nc+tab[c])
						{
							int ret=calc(num,sta);
							num.push(ret);
							cnt.pop();
						}
						else break;
					}
					
					sta.push(c);
					cnt.push(nc);
				}
			}
		}
		
		while(!sta.empty())
		{
			int ret=calc(num,sta);
			num.push(ret);
		}
		
		cout << num.top() << endl;
	}
}