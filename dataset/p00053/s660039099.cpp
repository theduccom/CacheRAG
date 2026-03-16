#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

constexpr int MAX = 10000;

bool isPrime(int n);

int main()
{
    vector<int> prime_list;
    prime_list.reserve(MAX);

    int p = 2;
    while (prime_list.size() != MAX) {
        if (isPrime(p)) {
            prime_list.push_back(p);
        }
        p++;
    }

    int n;
    while (cin >> n && n != 0) {
        int sum = 0;
        for (auto i = 0; i < n; i++) {
            sum += prime_list.at(i);
        }
        cout << sum << endl;
    }

    return 0;
}

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}