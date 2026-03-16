#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n) {
	if (n == 2)return true;
	if (n % 2 == 0)return false;
	for (int i = 3; i <= sqrt(n); i += 2) if (n%i == 0)return false;
	return true;
}
int main() {
	int n;
	while (cin >> n){
		for (int i = n - 1; ; i--){
			if (isprime(i)) {
				cout << i << ' ';
				break;
			}
		}
		for (int i = n + 1;; i++) {
			if (isprime(i)) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}