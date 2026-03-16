#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int ll;

int main()
{
	int n;
	string s;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		cin >> s;
		sort(s.begin(), s.end());
		ll x = stoll(s);
		reverse(s.begin(), s.end());
		ll y = stoll(s);
		cout << y - x << endl;

	}
	return 0;
}