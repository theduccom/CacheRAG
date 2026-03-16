# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
using namespace std;
using LL = long long;
constexpr int MOD = 1000000000 + 7;
//?¶????????????????????????????????????§??????????????????????¢????????????????
constexpr int INF = 2000000000;
const double PI = acos(-1);

string sum_string(string a, string b) {
	int al = a.size(), bl = b.size();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string ret;
	int tmp = 0;
	for (int i = 0; i < al || i < bl || tmp; i++) {
		tmp += (i < al ? a[i] - '0' : 0) + (i < bl ? b[i] - '0' : 0);
		ret.push_back('0' + tmp % 10);
		tmp /= 10;
	}
	reverse(ret.begin(), ret.end());
	return ret;
}

int main() {
	int n;
	cin>>n;
	string a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		string ans = sum_string(a, b);
		cout << (ans.size() > 80 ? string("overflow") : ans) << endl;
	}
}