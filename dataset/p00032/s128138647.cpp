#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<char, int>P;

int main() {
	int a, b, c;
	int cnt1 = 0, cnt2 = 0;
	while (scanf("%d,%d,%d", &a, &b, &c) != EOF) {
		if (a*a + b*b == c*c)cnt1++;
		if (a == b)cnt2++;
	}
	cout << cnt1 << endl << cnt2 << endl;
	return 0;
}