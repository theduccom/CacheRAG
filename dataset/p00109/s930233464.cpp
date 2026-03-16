#include <iostream>
#include <string>
#include <cctype>

#define rep(i,n)  for(int i=0;i<n;++i)

using namespace std;

string src;
int pos;

bool end() { return pos >= src.length(); }
char peek() { return src[pos]; }
void succ() { if (!end()) ++pos; }

int parse_expr();

int lex_number()
{
	int val = 0;
	char c = peek();
	do
	{
		val = 10 * val + (c - '0');
		succ();
	}
	while (!end() && isdigit(c = peek()));
	return val;
}

int parse_primary()
{
	int ret;

	char c = peek();
	switch (c)
	{
	case '(':
		succ();
		ret = parse_expr();
		succ();
		break;
	default:
		ret = lex_number();
		break;
	}
	return ret;
}

int parse_term()
{
	int x = parse_primary();
	while (!end() && (peek() == '*' || peek() == '/'))
	{
		char op = peek();
		succ();
		int y = parse_primary();
		x = (op == '*' ? x * y : x / y);
	}
	return x;
}

int parse_expr()
{
	int x = parse_term();
	while (!end() && (peek() == '+' || peek() == '-'))
	{
		char op = peek();
		succ();
		int y = parse_term();
		x = (op == '+' ? x + y : x - y);
	}
	return x;
}

int parse()
{
	pos = 0;
	return parse_expr();
}

int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		cin >> src;
		cout << parse() << endl;
	}
	return 0;
}