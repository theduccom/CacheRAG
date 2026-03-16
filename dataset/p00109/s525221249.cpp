#include <iostream>
#include <string>
#include <stack>
#include <map>

using namespace std;

class myCalc {
private:
	std::map<char, int> mOperator;
public:
	myCalc( void ) {
		mOperator['('] = -2;
		mOperator[')'] = -1;
		mOperator['+'] = 0;
		mOperator['-'] = 1;
		mOperator['/'] = 2;
		mOperator['*'] = 2;
	}
	std::string ToRPN( std::string str ) {
		std::string ret;
		std::stack<char> st;
		int len = str.size(), i = 0;
		while(i < len) {
			switch(str[i]) {
			case '+' :
				while(!st.empty() && mOperator[st.top()] > mOperator[str[i]]) {
						ret += st.top(); st.pop();
				}
			case '(':
				st.push(str[i++]);
				break;
			case '-': case '/': case '*':
				while(!st.empty() && mOperator[st.top()] >= mOperator[str[i]]) {
					ret += st.top(); st.pop();
				}
				st.push(str[i++]);
				break;
			case ')':
				while(!st.empty() && st.top() != '(') {
					ret += st.top();
					st.pop();
				}
				st.pop();
				++i;
				break;
			default:
				ret += '[';
				while('0' <= str[i] && str[i] <= '9') ret += str[i++];
				ret += ']';
				break;
			}
		}
		while(!st.empty()) { ret += st.top(); st.pop(); }
		return ret;
	}
	int Calculate( std::string str ) {
		std::stack<int> st;
		int len = str.size(), i = 0;
		while(i < len) {
			int a, b;
			switch(str[i]) {
			case '+':
				a = st.top(); st.pop();
				b = st.top(); st.pop();
				st.push(a+b);
				break;
			case '-':
				a = st.top(); st.pop();
				if(!st.empty()) {b = st.top(); st.pop();}
				else b = 0;
				st.push(b-a);
				break;
			case '*':
				a = st.top(); st.pop();
				b = st.top(); st.pop();
				st.push(a*b);
				break;
			case '/':
				a = st.top(); st.pop();
				b = st.top(); st.pop();
				st.push(b/a);
				break;
			default:
				++i; a = 0;
				while(str[i] != ']') {
					a *= 10;
					a += (str[i++] - '0');
				}
				st.push(a);
				break;
			}
			++i;
		}
		return st.top();
	}
};

int main( void )
{
	long long n;
	myCalc calc;
	cin >> n;
	while(n--) {
		string in;
		cin >> in;
		in.erase(in.size()-1);
		//cout << in << ' ' << calc.ToRPN(in) << endl;
		cout << calc.Calculate(calc.ToRPN(in)) << endl;
	}
	return 0;
}