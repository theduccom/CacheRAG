#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <list>
#include <assert.h>
#include <math.h>
#include <valarray>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <complex>
#include <list>

using namespace std;
typedef long long int LL;
typedef pair<long long int, long long int> pii;
typedef pair<double, double> pdd;

#define SORT(c) sort((c).begin(),(c).end())
#define BACKSORT(c) sort((c).begin(),(c).end(),std::greater<LL>())
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int expr(string& s, int& i);
int term(string& s, int& i);
int factor(string& s, int& i);
int number(string& s, int& i);

int expr(string& s,int& i) {
	int a = term(s, i);
	while (s[i] == '+' || s[i] == '-') {
		char op = s[i];
		i++;
		int b = term(s, i);
		if (op == '+') {
			a = a+b;
		}
		else {
			a = a - b;
		}
	}
	return a;
}

int term(string& s, int& i) {
	int a = factor(s, i);
	while (s[i] == '*' || s[i] == '/') {
		char op = s[i];
		i++;
		int b = factor(s, i);
		if (op == '*') {
			a = a*b;
		}
		else {
			a = a / b;
		}
	}
	return a;
}

int factor(string& s, int& i) {
	if (isdigit(s[i])) {
		int a = number(s, i);
		return a;
	}
	else {
		i++;//(
		int a = expr(s, i);
		i++;//)
		return a;
	}
}

int number(string& s, int& i) {
	int a = s[i]-'0';
	i++;
	while (isdigit(s[i])) {
		a = a * 10 + (s[i] - '0');
		i++;
	}
	return a;
}

int main()
{
	int n;
	cin >> n;
	REP(j, n) {
		string ss;
		cin >> ss;
		int k = 0;
		cout << expr(ss, k) << endl;
	}

}