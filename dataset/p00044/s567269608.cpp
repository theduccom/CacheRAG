#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    vector<int> primes;
    vector<int> is_prime(60001, 1);
    is_prime[0] = is_prime[1] = 0;
    int lim = (int)sqrt(60000);
    for(int i = 2; i <= lim; ++i) {
        if(is_prime[i]) {
            if(i < lim) {
                for(int j = i*i; j <= 60000; j += i) is_prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= 60000; ++i) 
        if(is_prime[i]) primes.push_back(i);

    int n;
    while(cin >> n) {
        cout << *(lower_bound(primes.begin(), primes.end(), n)-1) << ' ' << *upper_bound(primes.begin(), primes.end(), n) << endl;
    }
    return 0;
}