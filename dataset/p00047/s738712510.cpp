#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<char, int>P;

int main() {
	int a[3]{ 1 };
	string s;
	while (cin >> s) {
		swap(a[s[0] - 'A'], a[s[2] - 'A']);
	}
	rep(k, 3)if (a[k])printf("%c\n", k + 'A');
	return 0;
}