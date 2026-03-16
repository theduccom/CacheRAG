#include<bits/stdc++.h>
using namespace std;
vector<string>v;
double d(double a, double b, double c, double d) { return sqrt((a - c) * (a - c) + (b - d) * (b - d)); }
double f(string a, string b, string c) {
	double a1, a2, b1, b2, c1, c2;
	int n = 1; bool b00l = 0; double pk = 1, pk1 = 1, p = 0;
	a += ','; b += ','; c += ',';
	for (char ch : a) {
		if (ch == ',') {
			p *= pk1;
			if (n == 1)a1 = p;
			if (n == 2)a2 = p;
			n++; if (n > 2)n %= 2; b00l = 0; pk = 1; p = 0; pk1 = 1;
		}
		else if (ch == '.') {
			b00l = 1; pk /= 10;
		}
		else if (ch == '-') {
			pk1 = -1;
		}
		else if (b00l) {
			p += (double)(ch - '0') * pk;
			pk /= 10;
		}
		else {
			p *= 10; p += (double)(ch - '0');
		}
	}
	for (char ch : b) {
		if (ch == ',') {
			p *= pk1;
			if (n == 1)b1 = p;
			if (n == 2)b2 = p;
			n++; if (n > 2)n %= 2; b00l = 0; pk = 1; p = 0; pk1 = 1;
		}
		else if (ch == '.') {
			b00l = 1; pk /= 10;
		}
		else if (ch == '-') {
			pk1 = -1;
		}
		else if (b00l) {
			p += (double)(ch - '0') * pk;
			pk /= 10;
		}
		else {
			p *= 10; p += (double)(ch - '0');
		}
	}
	for (char ch : c) {
		if (ch == ',') {
			p *= pk1;
			if (n == 1)c1 = p;
			if (n == 2)c2 = p;
			n++; if (n > 2)n %= 2; b00l = 0; pk = 1; p = 0; pk1 = 1;
		}
		else if (ch == '.') {
			b00l = 1; pk /= 10;
		}
		else if (ch == '-') {
			pk1 = -1;
		}
		else if (b00l) {
			p += (double)(ch - '0') * pk;
			pk /= 10;
		}
		else {
			p *= 10; p += (double)(ch - '0');
		}
	}
	double ad = d(b1, b2, c1, c2), bd = d(c1, c2, a1, a2), cd = d(a1, a1, b1, b2);
	double z = (ad + bd + cd) / 2;
	return sqrt(z * (z - ad) * (z - bd) * (z - cd));
}
signed main() {
	string s; double ans = 0;
	while (cin >> s) {
		v.push_back(s);
		if (v.size() >= 3)ans += f(v[0], v.back(), v[v.size() - 2]);
	}
	cout << ans << endl;
}
