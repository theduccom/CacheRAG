#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX_N = 10000;
bool is_prime[MAX_N + 1];

bool sieve(int n)
{
    if(n % 2 == 0) return false;

    bool ret = true;
    for(int i = 3; i * i <= n; i+=2) {
        if(n % i == 0) {
            ret = false;
            break;
        }
    }
    return ret;
}

int main()
{
    int n, p;
    is_prime[1] = true;
    is_prime[2] = true;

    for(int i = 3; i <= MAX_N; i++)
        is_prime[i] = sieve(i);

    while(cin >> n && n) {
        p = 0;
        for(int i = 5; i <= n; i+=2) {
            if(is_prime[i - 2] && is_prime[i]) {
                p = i;
            }
        }
        cout << p - 2 << " " << p << endl;
    }
}