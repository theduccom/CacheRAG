#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int main() {
	string s; getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout << s << endl;
	return 0;
}