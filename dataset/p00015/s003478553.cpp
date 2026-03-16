#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#define MAX_LEN 101

using namespace std;

void q15() {
	int N;
	scanf("%d\n", &N);
	for (int n = 0; n < N; n++) {
		string a, b;
		getline(cin, a);
		getline(cin, b);

		if (a.length() < b.length()) {
			string tmp = a;
			a = b;
			b = tmp;
		}

		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		
		int carry = 0;
		string ans="";

		int i = 0;
		for (; i < b.length(); i++) {
			ans+= (((a[i] - '0') + (b[i] - '0') + carry) % 10) + '0';
			carry = ((a[i] - '0') + (b[i] - '0') + carry) / 10;
		}
		for (; i < a.length(); i++) {
			ans+= (((a[i] - '0') + carry) % 10) + '0';
			carry = ((a[i] - '0') + carry) / 10;
		}
		for (; carry; i++) {
			ans+= (carry % 10) + '0';
			carry = carry / 10;
		}

		reverse(ans.begin(), ans.end());
		cout << (ans.length() > 80 ? "overflow" : ans) << endl;
	}
}
int main() {
	q15();
	return 0;
}