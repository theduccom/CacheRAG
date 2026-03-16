#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
using namespace std;

int op_priority(char a) {
	if(a == '+' || a == '-')
		return 0;
	if(a == '*' || a == '/')
		return 1;
	return -1;
}

void clac_once(stack<long long> & num_stack, stack<char> & op_stack) {
	long long a, b;
	long long c;
	char op;

	b = num_stack.top();
	num_stack.pop();
	a = num_stack.top();
	num_stack.pop();
	op = op_stack.top();
	op_stack.pop();

	switch(op) {
		case '+' :
			c = a + b;
			break;
		case '-':
			c = a - b;
			break;
		case '*':
			c = a * b;
			break;
		case '/':
			c = a / b;
	}

	num_stack.push(c);
}

long long clac(string str) {
	stack<long long> num_stack;
	stack<char> op_stack;

	for(int i = 0; i < str.size();) {
		if(str[i] == '(') {
			int start = ++i;
			int count = 1;

			while(count) {
				if(str[i] == ')')
					count--;
				else if(str[i] == '(')
					count++;
				i++;
			}

			num_stack.push(clac(string(str.begin() + start, str.begin() + i)));
		}
		else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '=' || str[i] == ')') {
			while(!op_stack.empty() && op_priority(op_stack.top()) >= op_priority(str[i])) {
				clac_once(num_stack, op_stack);
			}
			op_stack.push(str[i]);
			i++;
		}
		else if('0' <= str[i] && str[i] <= '9') {
			long long tmp = 0;
			while('0' <= str[i] && str[i] <= '9') {
				tmp *= 10;
				tmp += str[i] - '0';
				i++;
			}
			num_stack.push(tmp);
		}
	}

	if(op_stack.size() != 1)
		exit(1);

	return num_stack.top();
}

int main() {
	int n;

	cin >> n;
	for(int i = 0; i < n; i++) {
		string str;

		cin >> str;
		cout << clac(str) << endl;
	}

	return 0;
}