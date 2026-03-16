#include <iostream>
using namespace std;

int main()
{
    bool primes[50000]={false};
    primes[0] = true;
    for(int i=2;i <= 25000;++i) {
        if (primes[i-1]) continue;
        for(int j=i+i;j <= 50000;j+=i) {
            primes[j-1] = true;
        }
    }

    int n;
    while (cin >> n && n) {
        int cnt = 0;
        for(int i=2; i <= n/2;++i) {
            if (!primes[i-1] && !primes[n-i-1]) {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}