#include <map>
#include <stack>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int calculate(string expr) {
	map<char,int> op_pd {{'+',0},{'-',0},{'*',1},{'/',1}}; // operator precedence
	vector<string> pf; // postfix expression
	stack<char> op_s;
	// turn infix to postfix
	string unit;
	for (char ch : expr) {
		if (ch >= '0' && ch <= '9') {
			unit.push_back(ch);
		} else {
			if (!unit.empty()) {
				pf.push_back(unit);
				unit.clear();
			}
			if (ch == '(') {
				op_s.push('(');
			} else if (ch == ')') {
				while (op_s.top() != '(') {
					pf.push_back(string().assign(1,op_s.top()));
					op_s.pop();
				}
				op_s.pop();
			} else { // '+','-','*','/'
				while (!op_s.empty() && op_s.top() != '(' && op_pd[ch] <= op_pd[op_s.top()]) {
					pf.push_back(string().assign(1,op_s.top()));
					op_s.pop();
				}
				op_s.push(ch);
			}
		}
	}
	if (!unit.empty()) {
		pf.push_back(unit);
	}
	while (!op_s.empty()) {
		pf.push_back(string().assign(1,op_s.top()));
		op_s.pop();
	}
	// calculate the postfix expression
	stack<int> num_s;
	num_s.push(stoi(pf.front()));
	for (auto i = pf.begin() + 1;i != pf.end();++i) {
		if (i->front() >= '0' && i->front() <= '9') {
			num_s.push(stoi(*i));
		} else {
			int second = num_s.top();
			num_s.pop();
			int first = num_s.top();
			num_s.pop();
			switch (i->front()) {
				case '+':
					num_s.push(first + second);
					break;
				case '-':
					num_s.push(first - second);
					break;
				case '*':
					num_s.push(first*second);
					break;
				default: // '/'
					num_s.push(first/second);
			}
		}
	}
	return num_s.top();
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		string expr;
		cin >> expr;
		cout << calculate(expr.substr(0,expr.size()-1)) << endl;
	}
}