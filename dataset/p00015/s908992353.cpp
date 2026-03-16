#include <iostream>
#include <sstream>

using namespace std;

string reverse(string s) {
	string ans = "";
	int i = s.size()-1;
	for (int j = 0; i >= 0; i--, j++)
		ans += s[i];
	return ans;
}

string add(string n, string m) {
	string ans;
	int a, carry = 0;
	if (n.size() < m.size())
		swap(n, m);
	int i = n.size();
	int j = m.size();
	for (; i > 0; i--) {
		a = (n[i-1] - '0') + carry;
		if (j) {
			a = a + (m[j-1] - '0');
			j--;
		}
		if (a > 9) {
			a -= 10;
			carry = 1;
		} else {
			carry = 0;
		}
		stringstream ss;
		ss << a;
		string t = ss.str();
		ans += t[0];
	}
	if (carry)
		ans += "1";
	return reverse(ans);
}

int main() {
	string n, m, ans;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n >> m;
		ans = add(n, m);
		if (ans.size() > 80)
			cout << "overflow" << endl;
		else
			cout << ans << endl;
	}

	return 0;
}