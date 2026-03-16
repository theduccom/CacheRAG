#include <iostream>
#include <atomic>
#include <thread>
#include <mutex>
#include <string>
#include <string.h>
#include <functional>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define eps LDBL_EPSILON
#define moder 1000000007
#define int long long
#define ll long long
#define INF LLONG_MAX/3
#define P std::pair<int,int>
#define prique priority_queue<int,vector<int>,greater<int>>
using namespace std;
class BigInt {
private:
	vector<int> number;
public:
	BigInt(string s) {
		for (int i = s.size() - 1; i >= 0; i--) {
			number.push_back(s[i] - '0');
		}
	}
	BigInt(vector<int> v) {
		number = v;
	}
	string get() {
		string s = "";
		for (int i = number.size() - 1; i >= 0; i--) {
			s = s + to_string(number[i]);
		}
		return s;
	}
	vector<int> vget() {
		return number;
	}
	int length() {
		return number.size();
	}
	void shift() {
		rep(i, number.size()) {
			if (number[i] >= 10) {
				if (i != number.size() - 1)number[i + 1] += number[i] / 10;
				else number.push_back(number[i] / 10);
				number[i] %= 10;
			}
		}
	}
};
bool operator<(BigInt a, BigInt b) {
	if (a.length() < b.length())return true;
	if (a.length() > b.length())return false;
	string s = a.get(), t = b.get();
	rep(i, a.length()) {
		if (s[i] < t[i])return true;
		if (s[i] > t[i])return false;
	}
	return false;
}
bool operator>(BigInt a, BigInt b) {
	return !(a < b);
}
BigInt operator+(BigInt a, BigInt b) {
	if (a < b)swap(a, b);
	vector<int> s = a.vget(), t = b.vget();
	rep(i, t.size()) {
		s[i] += t[i];
	}
	BigInt ans(s);
	ans.shift();
	return ans;
}
signed main() {
	int n;
	cin >> n;
	rep(i, n) {
		string s, t;
		cin >> s >> t;
		BigInt a(s), b(t);
		BigInt c = a + b;
		if (c.length() > 80)puts("overflow");
		else cout << c.get() << endl;
	}
	getchar();
	getchar();
	return 0;
}
