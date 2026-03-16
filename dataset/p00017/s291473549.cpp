#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int main() {
	string s;
	while (getline(cin, s)) {
		while (1) {
			for (char &c : s) {
				if (isalpha(c)) {
					if (c == 'z')c = 'a';
					else c++;
				}
			}
			if ((int)s.find("the") >= 0 || (int)s.find("this") >= 0 || (int)s.find("that") >= 0)break;
		}
		cout << s << endl;
	}
	return 0;
}