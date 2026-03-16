#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
ll prime[1000001];
ll length = 0;
void insert(ll p) { prime[length] = p; length++; return; }
int main() {
	insert(2);
	for (ll i = 3; i < 1000000; i += 2) {
		for (ll j = 0; j < length; j++)
			if (i%prime[j] == 0)goto cont;
			else if (prime[j] > sqrt(i))break;
			insert(i);
		cont:;
	}
	ll n; while (cin >> n) {
		if (n == 0)break;
		ll sum = 0;
		for (ll i = 0; i < n; i++)
			sum += prime[i];
		cout << sum << endl;
	}
	return 0;
}