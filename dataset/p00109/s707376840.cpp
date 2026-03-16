#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

int culc1();
int culc2();
int culc3();
int culc4();

int n;
string str;
int cur;

int main() {
	cin >> n;
	while (n--) {
		cin >> str;
		cur = 0;
		cout << culc1() << endl;
	}
	return 0;
}


int culc1() {
	int val = culc2();
	while (str[cur] == '+' || str[cur] == '-') {
		char op = str[cur++];
		int val2 = culc2();

		if (op == '+') val += val2;
		else val -= val2;
	}
	return val;
}

int culc2() {
	int val = culc3();
	while (str[cur] == '*' || str[cur] == '/') {
		char op = str[cur++];
		int val2 = culc3();
		
		if (op == '*') val *= val2;
		else val /= val2;
	}
	return val;
}

int culc3() {
	if (isdigit(str[cur])) return culc4();
	cur++;
	int res = culc1();
	cur++;
	return res;
}

int culc4() {
	int num = str[cur++] - '0';
	while (isdigit(str[cur]))
		num = num*10 + str[cur++] - '0';
	return num;
}