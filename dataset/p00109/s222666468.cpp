#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <functional>
#include <numeric>
using namespace std;
#define rep(p,q) for(int i = p;i < q; i++)
#define big (long long int)(10e9 + 7)

int siki(string &str, int &i);
int kou(string &str, int &i);
int insu(string &str, int &i);
int number(string &str, int &i);

int main(void) {
	int num = 0;
	cin >> num;
	rep(0, num) {
		string str;
		int x = 0;
		cin >> str;
		cout << siki(str, x) << endl;
	}
}

int siki(string &str,int &i) {
	int val1 = kou(str,i);
	while (str[i] == '+' || str[i] == '-') {
		char op = str[i];
		i++;
		int val2 = kou(str, i);
		if (op == '+') {
			val1 = val1 + val2;
		}
		else
		{
			val1 = val1 - val2;
		}
	}
	return val1;
}

int kou(string &str, int &i) {
	int val1 = insu(str, i);
	while (str[i] == '*' || str[i] == '/') {
		char op = str[i];
		i++;
		int val2 = insu(str, i);
		if (op == '*') {
			val1 = val1 * val2;
		}
		else {
			val1 = val1 / val2;
		}
	}
	return val1;
}

int insu(string &str, int &i) {
	int val1 = 0;
	if(str[i] != '(')val1 = number(str, i);
	else if(str[i] == '(') {
		i++;
		val1 += siki(str, i);
		i += 1;
	}
	return val1;
}

int number(string &str, int &i) {
	int val1 = 0;
	int val2 = 0;
	if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') {
			 val1 = (int)str[i] - (int)'0';
		i++;
		if ( str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') {
			int now = i;
			val2 += number(str, i);
			val1 = val1 * pow(10,i - now);
			val1 += val2;

		}
	}
	return val1;
}