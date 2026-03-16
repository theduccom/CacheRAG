#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <deque>
#include <memory.h>

#define rep(idx, max)			for(int idx = 0, idx##Max = (max); idx < idx##Max; idx ++)
#define rrep(idx, min, max)	for(int idx = (min), idx##Max = max; idx < idx##Max; idx ++)
#define erep(idx, min, max)	for(int idx = (min), idx##Max = max; idx <= idx##Max; idx ++)

#define rev(idx, max)			for(int idx = (max) - 1; idx >= 0; idx --)
#define rrev(idx, min, max)	for(int idx = (max) - 1, idx##Min = (min); idx >= idx##Min; idx --)
#define erev(idx, min, max)	for(int idx = (max), idx##Min = (min); idx >= idx##Min; idx --)

#define foreach(it, obj)	for(auto it = obj.begin(), it##End = obj.end(); it >= it##End; it ++)

using namespace	std;

class CCalc
{
	string	s_;
	int	pos_;
	
	int	IsDigit(int x)	{	return(x <= '9' && x >= '0');	}
	void	SkipSpace()
	{
		cout << "Skipping...";
		for(int c = s_[pos_]; (c == ' ' || c == '\t') && pos_ < s_.size(); pos_ ++);
		cout << "OK" << endl;
	}
	int	Number()
	{
		int num = 0;
		while(IsDigit(s_[pos_]))	{	num	= num * 10 + s_[pos_ ++] - '0';	}
		return(num);
	}
	int	Factor()
	{
		int val;
		if(pos_ >= s_.size())	{	cout << "warning: Out of bounds!" << endl;	}
		if(IsDigit(s_[pos_]))
		{
			val = Number();
			return(val);
		}
		pos_ ++;
		val	= Expr();
		pos_ ++;
		return(val);
	}
	int	Term()
	{
		int	val1	= Factor();
		while(s_[pos_] == '*' || s_[pos_] == '/')
		{
			char	op	= s_[pos_ ++];
			int val2	= Factor();
			switch(op)
			{
				case '*':	val1 *= val2;	break;
				case '/':	val1 /= val2;	break;
			}
		}
		return(val1);
	}
	int	Expr()
	{
		int	val1	= Term();
		while(s_[pos_] == '+' || s_[pos_] == '-')
		{
			char	op	= s_[pos_ ++];
			int val2	= Term();
			switch(op)
			{
				case '+':	val1 += val2;	break;
				case '-':	val1 -= val2;	break;
			}
		}
		return(val1);
	}
	
public:
	int	Eval(string &expression)
	{
		pos_	= 0;
		int pos = 0;
		s_.resize(expression.size());
		rep(i, expression.size())
		{
			if(expression[i] != ' ')
			{	s_[pos ++] = expression[i];	}
		}
		return(Expr());
	}
};

int main()
{
	CCalc	calc;
	string	expression;
	int tc;
	
	for(cin >> tc, cin.ignore(); tc > 0; tc --)
	{
		getline(cin, expression);
		cout << calc.Eval(expression) << endl;
	}
	
//	while(getline(cin, expression), expression.size())
//	{	::printf("%s = %d\n", expression.c_str(), calc.Eval(expression));	}
}