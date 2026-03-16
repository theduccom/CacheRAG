#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = primes.back() + 2, diff = n - (int) primes.size(); diff > 0; i += 2) {
            bool add = true;
            for (vector<int>::iterator it = primes.begin(); it != primes.end(); it++) {
                if ((*it) * (*it) > i) {
                    break;
                }
                if (i % (*it) == 0) {
                    add = false;
                    break;
                }
            }
            if (add) {
                primes.push_back(i);
                diff--;
            }
        }
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += primes[i];
        }
        cout << sum << endl;
    }
}