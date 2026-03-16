#include <iostream>

using namespace std;

const int max_lim = 50001;
bool prime[max_lim];

void init()
{
    for (int i = 0; i < max_lim; i++)
        prime[i] = true;
    prime[0] = prime[1] = false;

    for (int i = 2; i * i < max_lim; i++) 
        for (int j = 2 * i; j < max_lim; j += i)
            prime[j] = false;
}

int main()
{
    int n;

    init();
    while (cin >> n, n) {
        int ans = 0;
        for (int i = 2; 2 * i <= n; i++) 
            if (n - i > 0 && prime[i] && prime[n - i]) 
                ans++;
        cout << ans << endl;
    }

    return 0;
}