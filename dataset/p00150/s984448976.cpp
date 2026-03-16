#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_P = 10020;
bool prime[MAX_P];
int twin_prime[MAX_P];
int size;

void init()
{
    for (int i = 0; i < MAX_P; i++)
        prime[i] = true;
    prime[0] = prime[1] = false;

    for (int i = 2; i * i < MAX_P; i++)
        if (prime[i]) 
            for (int j = 2 * i; j < MAX_P; j += i)
                prime[j] = false;

    for (int i = 0; i < MAX_P; i++) 
        if (prime[i] && prime[i + 2])
            twin_prime[size++] = i;
}


int main()
{
    init();

    int n;
    while (cin >> n, n) {
        n -= 2;
        for (int i = 0; i < MAX_P; i++)
            if (twin_prime[i] > n) {
                cout << twin_prime[i - 1] << " " << twin_prime[i - 1] + 2 << endl;
                break;
            }
    }

    return 0;
}