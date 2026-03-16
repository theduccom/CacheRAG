#include <bits/stdc++.h>

using namespace std;

#define MAX 1100000

int main()
{
    int N, X;
    
    bool prime[MAX];
    fill(prime, prime + MAX, 1);
    prime[0] = prime[1] = 0;

    for (int i = 2; i < MAX; i++) {
        if (prime[i]) {
            for (int j = i * 2; j < MAX; j += i) {
                prime[j] = 0;
            }
        }
    }
    
    while (cin >> N >> X, N) {
        vector<int> a(N);
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        
        bool dp[MAX] = {};
        dp[0] = 1;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= X-a[i]; j++) {
                if (dp[j]) {
                    dp[j+a[i]] = 1;
                }
            }
        }
        
        int res = -1;
        for (int i = X; i >= 0; i--) {
            if (prime[i] && dp[i]) {
                res = i;
                break;
            }
        }
        if (res == -1) {
            cout << "NA" << endl;
        } else {
            cout << res << endl;
        }
    }
    return 0;
}