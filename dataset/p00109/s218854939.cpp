#include"bits/stdc++.h"
using namespace std;

//define
#define ALL(a) a.begin(),a.end()
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) if(1)cout<<#x<<":"<<x<<endl;
#define DEBUG(x) if(1)cout<<#x<<":"<<x<<endl;
#define ll long long

//typedef
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

int formula(string &s, int &i);
int term(string &s, int &i);
int factor(string &s, int &i);
int number(string &s, int &i);

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int num = 0;
		cout << formula(s, num) << endl;
	}
	return 0;
}

int formula(string &s, int &i) {
	int res = term(s, i);
	while(s[i]=='+' || s[i]=='-'){
		char op = s[i];
		i++;
		if (op == '+') {
			res += term(s, i);
		}
		else {
			res -= term(s, i);
		}
	}
	return res;
}

int term(string &s, int &i) {
	int res = factor(s, i);
	while (s[i] == '*' || s[i] == '/') {
		char op = s[i];
		i++;
		if (op == '*') {
			res *= factor(s, i);
		}
		else {
			res /= factor(s, i);
		}
	}
	return res;
}

int factor(string &s, int &i) {
	int res;
	if (s[i] == '(') {
		i++;
		res = formula(s, i);
		i++;
	}
	else {
		res = number(s, i);
	}
	return res;
}

int number(string &s, int &i) {
	int res = 0;
	for (; isdigit(s[i]); i++) {
		res = (s[i]-'0')+ res * 10;
	}
	return res;
}