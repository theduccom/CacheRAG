#include <iostream>
#include <cstring>

using namespace std;

const int MAX_N = 1e6 + 10;

bool is_prime[MAX_N + 1];

void SieveOfEratosthenes(int n)
{
    for (int i = 0; i <= n; ++i)
        is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; ++i)
        if (is_prime[i])
            for (int j = 2 * i; j <= n; j += i)
                is_prime[j] = false;
}


int main()
{
    int n, x;

    SieveOfEratosthenes(1000000);

    while (cin >> n >> x, n || x) {
        int item[n];
        bool flag[x + 1];

        memset(flag, 0, sizeof(flag));
        for (int i = 0; i < n; ++i)
            cin >> item[i];

        flag[0] = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j + item[i] <= x; ++j)
                if (flag[j])
                    flag[j + item[i]] = true;
        }

        int money = x;
        for ( ; money >= 0; --money)
            if (is_prime[money] && flag[money])
                break;

        if (money > 0)
            cout << money << endl;
        else
            cout << "NA\n";
    }

    return 0;
}