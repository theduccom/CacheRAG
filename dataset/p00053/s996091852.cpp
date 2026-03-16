#include <iostream>
#include <vector>

using namespace std;

bool isprime(int n) {
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return n != 1;
}

int main() {
	vector<long long> v;
	int n = 0;
	for (int i = 2; n <= 10000; i++) {
		if (isprime(i)) {
			v.push_back(i);
			n++;
		}
	}
	while (cin >> n && n) {
		long long sum = 0;
		vector<long long>::iterator it = v.begin();
		int i = 0;
		while (i < n) {
			sum += *it;
			it++;
			i++;
		}
		cout << sum << endl;
	}

	return 0;
}