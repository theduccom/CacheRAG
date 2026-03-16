#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n; scanf("%d%*c", &n);
	rep(i, n) {
		string s; getline(cin, s);
		regex re("Hoshino");
		cout << regex_replace(s, re, "Hoshina") << endl;
	}
}