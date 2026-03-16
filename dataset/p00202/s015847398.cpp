#include <bits/stdc++.h>
using namespace std;

#define MAX_X (1000005)

void calcPrime(bitset < MAX_X > &prime)
{
    for ( int i = 2; i < MAX_X; i++ ) {
        prime[i] = true;
    }

    for ( int i = 2; i * i < MAX_X; i++ ) {
        if ( prime[i] ) {
            for ( int j = i * i; j < MAX_X; j += i ) {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    int N, X;
    bitset < MAX_X > prime;

    calcPrime(prime);

    while ( cin >> N >> X, N || X ) {
        bool dp[MAX_X] = {};

        dp[0] = true;
        for ( int i = 0; i < N; i++ ) {
            int v;
            cin >> v;
            for ( int j = 0; j <= X; j++ ) {
                if ( dp[j] && j + v <= X ) {
                    dp[j + v] = true;
                }
            }
        }
        int k = X;
        while ( k > 0 && (!prime[k] || !dp[k]) ) {
            k--;
        }
        if ( k > 0 ) {
            cout << k << endl;
        } else {
            cout << "NA" << endl;
        }
    }

    return (0);
}
