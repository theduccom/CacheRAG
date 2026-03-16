#include <iterator>
#include <typeinfo>
#include <list>
#include <map>     
#include <numeric>
#include <utility>
#include <queue>
#include <set>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ld long double
#define rep(a,t) for(int a=0;a<t;++a) 
#define forever while(true)
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
#define pb push_back
#define int_maxvalue numeric_limits<int>::max()
ll mod = 1e9 + 7;
string Addition(string a,string b) {
	string ans = "";
	int bef = 0;
	int be1 = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		int added = stoi(a.substr(i, 1)) + stoi(b.substr(i, 1))+be1;

		if (added >= 10) {
			bef = 1;
			added -= 10;
		}
		else {
			bef = 0;
		}

		ans = to_string(added)+ans;
		/*/
		stringstream ss;
		ss << added;

		ans = ss.str() + ans;*/
		be1 = bef;
		if (i == 0)
		{
			break;
		}
	}
	if (be1 == 1) {
		ans = "1" + ans;
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	rep(o1, n) {
		string a, b;
		cin >> a >> b;
		if (a.length() < b.length()) {
			swap(a, b);
		}
		string b1 = b;
		for (int i = 0; i < a.length() - b1.length(); ++i) {
			b = '0' + b;
		}
		string ans = Addition(a, b);
		if (ans.length() > 80) { cout << "overflow" << endl; }
		else {
			cout << ans << endl;
		}
	}
	return 0;
}

