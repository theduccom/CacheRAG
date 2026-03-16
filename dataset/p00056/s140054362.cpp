#include <bits/stdc++.h>

using namespace std;

int main() {

    bool search[50001];
    fill(search, search + 50001, true);

    for(int i = 2; i <= sqrt(50000); ++i) {
        if(search[i]) {
            for(int j = i * 2; j <= 50000; j += i) {
                search[j] = false;
            }
        }
    }

    vector<int> prime;
    for(int i = 2; i <= 50001; ++i) {
        if(search[i]) {
            prime.push_back(i);
        }
    }

    int ans[50001];
    for(int i = 0; prime[i] <= 25000; ++i) {
        for(int j = i; prime[i] + prime[j] <= 50000; ++j) {
            ++ans[prime[i] + prime[j]];
        }
    }

    int n;
    while(cin >> n, n) {
        cout << ans[n] << endl;
    }

}