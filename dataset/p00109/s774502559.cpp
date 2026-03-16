#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <complex>
#include <fstream>
#include <iomanip>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }

class CalcExpression
{
	typedef string::const_iterator State;
	class ParseError {};


public:

	int expression(State& begin)
	{
		int ret = term(begin);

		while(true)
		{
			if(*begin == '+')
			{
				begin++;
				ret += term(begin);
			}
			else if(*begin == '-')
			{
				begin++;
				ret -= term(begin);
			}
			else break;
		}

		return ret;
	}


private:

	int term(State& begin)
	{
		int ret = factor(begin);

		while(true)
		{
			if(*begin == '*')
			{
				begin++;
				ret *= factor(begin);
			}
			else if(*begin == '/')
			{
				begin++;
				ret /= factor(begin);
			}
			else break;
		}

		return ret;
	}

	int factor(State &begin)
	{
		int ret = 0;

		if(*begin == '(')
		{
			begin++;
			ret = expression(begin);
			begin++;
		}
		else return number(begin);

		return ret;
	}

	int number(State& begin)
	{
		int ret = 0;

		while(isdigit(*begin))
		{
			ret *= 10;
			ret += *begin - '0';
			begin++;
		}

		return ret;
	}

};

int main()
{
	int n;
	cin >> n;

	CalcExpression ce;
	while(n--)
	{
		string expression, buf;

		cin >> expression;
		string::const_iterator it = expression.begin();

		cout << ce.expression(it) << endl;
	}
}