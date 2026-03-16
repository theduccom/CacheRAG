#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string k, l;
	for(int j=0;j<n;j++) {
		int c = 0, d;
		cin >> k >> l;
		string g = "";
		string a="", b="";
		for (int i = k.length() - 1; i >= 0; i--) 
			a += k[i];
		for (int i = l.length()-1; i >= 0; i--)
			b += l[i];
		for (int i = 0; i < max(a.length(), b.length()) + 1; i++) {
			if (i < min(a.length(), b.length())) {
				int e = (int)a[i] - '0', f = (int)b[i] - '0';
				d = e + f + c;
				if (d >= 10) {
					g += (char)(d - 10) + '0';
					c = 1;
				}
				else {
					g += (char)d + '0';
					c = 0;
				}
			}
			else if (i < a.length()) {
				int e = (char)a[i] - '0';
				e += c;
				if (e >= 10) {
					g += (char)(e - 10) + '0';
					c = 1;
				}
				else {
					g += (char)e + '0';
					c = 0;
				}
			}
			else if (i < b.length()) {
				int e = (char)b[i] - '0';
				e += c;
				if (e >= 10) {
					g += (char)(e - 10) + '0';
					c = 1;
				}
				else {
					g += (char)e + '0';
					c = 0;
				}
			}
			else if (c == 1) {
				g += (char)c + '0';
				c = 0;
			}
		}
		string h = "";
		if (g.length() >= 81)
			cout << "overflow" << endl;
		else {
			for (int i = g.length() - 1; i >= 0; i--)
				h +=g[i];
			cout << h << endl;
		}
	}
}