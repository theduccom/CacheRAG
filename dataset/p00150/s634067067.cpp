#include <iostream>

using namespace std;

const int MAX_P = 10020;
bool prime[MAX_P];

void init()
{
    for (int i = 0; i < MAX_P; i++)
        prime[i] = true;
    prime[0] = prime[1] = false;

    for (int i = 2; i * i < MAX_P; i++)
        if (prime[i]) 
            for (int j = 2 * i; j < MAX_P; j += i)
                prime[j] = false;
}


int main()
{
    init();

    int n;
    while (cin >> n) {
        while (n - 2 >= 0) {
            if (prime[n] && prime[n - 2]) {
                cout << n - 2 << " " << n << endl;
                break;
            }
            n--;
        }
    }

    return 0;
}