#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int primes[1230];
vector<int> twin_left, twin_right;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()  {

    int idx = 0, diff, id, n;
    for (int i = 2; i <= 10000; i++) if (isPrime(i)) primes[idx++] = i;
    for (int i = 1; i < idx; i++) {
        diff = primes[i] - 2;
        id = int(lower_bound(primes, primes+i, diff)-primes);
        if (id >= 0 && primes[id] == diff) twin_left.push_back(diff), twin_right.push_back(primes[i]);
    }
    for (; ;) {
        scanf("%d", &n);
        if (n == 0) break;
        idx = int(upper_bound(twin_right.begin(), twin_right.end(), n) - twin_right.begin())-1;
        printf("%d %d\n", twin_left[idx], twin_right[idx]);
    }

    return 0;
}

