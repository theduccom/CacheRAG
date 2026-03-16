#include <bits/stdc++.h>
using namespace std;

string add(string a, string b) {
	int al = a.size(), bl = b.size();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string res;
	int tmp = 0;
	for (int i = 0; i < al || i < bl || tmp; i++) {
		tmp += (i < al ? a[i] - '0' : 0) + (i < bl ? b[i] - '0' : 0);
		res.push_back('0' + tmp % 10);
		tmp /= 10;
	}
	reverse(res.begin(), res.end());
	return res;
}

int main()
{
	int N;
	string a, b;
	cin >> N;
	while (N--) {
		cin >> a >> b;
		string sum = add(a, b);
		cout << (sum.size() > 80 ? string("overflow") : sum) << endl;
	}
	return 0;
}