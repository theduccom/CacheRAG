#include <iostream>
using namespace std;
typedef long long ll;

ll n;

void solve() {
	int five = 0, two = 0;
	for (ll i = 1; i <= n; i++) {
		ll tmp = i;
		while (tmp % 5 == 0) {
			five++;
			tmp /= 5;
		}
		//cout<<i<<"|"<<five<<endl;
	}
	cout<<five<<endl;
}

int main(int argc, const char *argv[]) {
	while (cin>>n, n) {
		solve();
	}
	return 0;
}