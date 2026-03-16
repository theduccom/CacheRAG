#include<iostream>
#include<string>
#include<vector>

#define REP1(i,n)   for(ll i=1,i##_len=(n);i<=i##_len;++i)
using ll = long long;
using namespace std;

ll calculate_expression_without_brackets(const string&exprwb)
{
	auto my_stoll = [](const string&str) {
		if (str[0] != '-') {
			return stoll(str);
		} else {
			for (ll i = 0;; ++i) {
				if (str[i] != '-') {
					return stoll(str.substr(i - i % 2));
				}
			}
		}
	};
	vector<ll>arg;
	vector<char>opr;
	ll head = 0;
	REP1(i, exprwb.size() - 2) {
		if (exprwb[i] == '+' || exprwb[i] == '-' && i != 0 && [](char c) {return '0' <= c && c <= '9'; }(exprwb[i - 1]) || exprwb[i] == '*' || exprwb[i] == '/') {
			arg.push_back(my_stoll(exprwb.substr(head, i - head)));
			opr.push_back(exprwb[i]);
			head = i + 1;
		}
	}
	arg.push_back(my_stoll(exprwb.substr(head)));
	if (arg.size() == 1) {
		return arg[0];
	} else {
		for (ll i = 0; i < opr.size(); ++i) {
			if (opr[i] == '*') {
				arg[i] *= arg[i + 1];
				arg.erase(arg.begin() + i + 1);
				opr.erase(opr.begin() + i);
				--i;
			} else if (opr[i] == '/') {
				arg[i] /= arg[i + 1];
				arg.erase(arg.begin() + i + 1);
				opr.erase(opr.begin() + i);
				--i;
			}
		}
		if (arg.size() == 1) {
			return arg[0];
		} else {
			for (ll i = 0; i < opr.size(); ++i) {
				if (opr[i] == '+') {
					arg[i] += arg[i + 1];
					arg.erase(arg.begin() + i + 1);
					opr.erase(opr.begin() + i);
					--i;
				} else if (opr[i] == '-') {
					arg[i] -= arg[i + 1];
					arg.erase(arg.begin() + i + 1);
					opr.erase(opr.begin() + i);
					--i;
				}
			}
			return arg[0];
		}
	}
}
string calculate_expression(const string&expr) {
	ll open = expr.find('(');
	if (open != string::npos) {
		ll close = [expr, open]() {
			ll cnt = 0;
			for (ll i = open + 1;; ++i) {
				if (expr[i] == '(') {
					++cnt;
				} else if (expr[i] == ')') {
					if (cnt == 0) {
						return i;
					}
					--cnt;
				}
			}
		}();
		return calculate_expression(expr.substr(0, open) + calculate_expression(expr.substr(open + 1, close - open - 1)) + expr.substr(close + 1));
	} else {
		return to_string(calculate_expression_without_brackets(expr));
	}
}
signed main()
{
	ll n;
	cin >> n;
	for (ll i = 0; i < n; ++i) {
		string expr;
		cin >> expr;
		expr.pop_back();
		cout << calculate_expression(expr) << endl;
	}
	return 0;
}
