#include <bits/stdc++.h>

using namespace std;

stack<int> DigitStack;
stack<char> OpStack;
string Formulation;

void calculation() {
	int num2, result;
	char ch;

	ch = OpStack.top();
	OpStack.pop();
	switch (ch)
	{
	case '+': 
		num2 = DigitStack.top();
		DigitStack.pop();
		result = DigitStack.top();
		DigitStack.pop();
		result += num2; 
		break;
	case '-': 
		num2 = DigitStack.top();
		DigitStack.pop();
		result = DigitStack.top();
		DigitStack.pop(); 
		result -= num2; 
		break;
	case '*':
		num2 = DigitStack.top();
		DigitStack.pop();
		result = DigitStack.top();
		DigitStack.pop();
		result *= num2; 
		break;
	case '/': 
		num2 = DigitStack.top();
		DigitStack.pop();
		result = DigitStack.top();
		DigitStack.pop();
		result /= num2; break;
	default:return;
	}
	DigitStack.push(result);
}

int calculateNumber(int *pIndex) {
	int sum;
	string tmp;
	stringstream ss;

	tmp += Formulation[(*pIndex)++];
	while (isdigit(Formulation[*pIndex])) {
		tmp += Formulation[*pIndex];
		(*pIndex)++;
	}
	//cout << tmp << endl;
	ss << tmp;
	ss >> sum;
	ss.clear();
	(*pIndex)--;

	return sum;
}

int priorityOfOperator(char ch)
{
	switch (ch)
	{
	case '(':
		return 3;
	case '*':
	case '/':
		return 2;
	case '+':
	case '-':
		return 1;
	default:
		return 0;
	}
}

void solve() {
	int i, num, len;
	char cTmp;

	len = Formulation.size() - 1;
	for (i = 0; i < len; i++) {
		cTmp = Formulation[i];
		
		if (isdigit(cTmp)) {
			num = calculateNumber(&i);
			DigitStack.push(num);
			continue;
		}

		if ( cTmp == '(' || OpStack.empty() || OpStack.top() == '(' ) {
			OpStack.push(cTmp);
			continue;
		}

	    if (priorityOfOperator(cTmp) > priorityOfOperator(OpStack.top())) {
			OpStack.push(cTmp);
		}		
		else {
			do {
				calculation();
			} while ( !OpStack.empty() && OpStack.top() != '(' && priorityOfOperator(cTmp) <= priorityOfOperator(OpStack.top()));

			if (cTmp == ')') {
				OpStack.pop();
			}
			else {
				OpStack.push(cTmp);
			}
		}
	}

	while (!OpStack.empty()) {
		calculation();
	}

}

int main() {
	int n, result;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> Formulation;
		//cout << Formulation << endl;
		solve();
		result = DigitStack.top();
		DigitStack.pop();
		cout << result << endl;
	}

	return 0;
}
