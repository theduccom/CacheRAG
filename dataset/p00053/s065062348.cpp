#include <iostream>

using namespace std;

const int MAX_P = 105000;
bool prime[MAX_P];
long long p[MAX_P + 1];


void init()
{
    for (int i = 0; i < MAX_P; i++)
        prime[i] = true;
    prime[0] = prime[1] = false;

    for (int i = 2; i * i < MAX_P; i++)
        if (prime[i]) 
            for (int j = 2 * i; j < MAX_P; j += i)
                prime[j] = false;
    int n = 1;
    for (int i = 0; i < MAX_P; i++)
        if (prime[i])
            p[n++] = i;
}

int main()
{
    int n;
    
    init();
    while (cin >> n, n) {
        long long sum = 0;

        for (int i = 1; i <= n; i++)
            sum += p[i];

        cout << sum << endl;
    }

    return 0;
}