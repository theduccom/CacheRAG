#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

char s[10];
int main() {
	int A = 0, B = 0, AB = 0, O = 0;
	int n;
	while (scanf("%d,%s", &n, s) != EOF) {
		if (!strcmp(s, "A"))A++;
		else if (!strcmp(s, "B"))B++;
		else if (!strcmp(s, "AB"))AB++;
		else O++;
	}
	cout << A << endl << B << endl << AB << endl << O << endl;
	return 0;
}