#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;

int n;
string a;
string b;

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> a;
		cin >> b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());

		if (a.length() > 80 || b.length() > 80) {
			cout << "overflow" << endl;
			continue;
		}

		string ans;
		int alen = a.length();
		int blen = b.length();
		if (alen > blen) {
			for (int i = 0; i < alen - blen; i++) {
				b += '0';
			}
		}
		else {
			for (int i = 0; i < blen - alen; i++) {
				a += '0';
			}
		}

		int k = 0;
		for (int i = 0; i < a.length(); i++) {
			int ai = a[i] - '0';
			int bi = b[i] - '0';
			int ci = ai + bi + k;
			ans += ci % 10 + '0';
			k = ci / 10;
		}
		if (k != 0)ans += k+'0';
	
		if (ans.length() > 80) {
			cout << "overflow" << endl;
			continue;
		}
		reverse(ans.begin(), ans.end());
		for (int i = 0; i < ans.length(); i++) {
			cout << ans[i];
		}
		cout << endl;
	}

	
	return 0;
}