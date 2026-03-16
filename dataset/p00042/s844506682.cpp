#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <random>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int caseId = 1;

void solve42(int W) {
    cout << "Case " << caseId << ":" << endl;
    int N;
    cin >> N;
    char c;
    int dp[1001] = {0}; // dp[i]: maxvalue under weight i
    REP(i,N) {
        int v, w;
        cin >> v >> c >> w;
        for(int j = W; j >= w; j--) {
            dp[j] = max(dp[j], dp[j-w] + v);
        }
    }
    int value = 0, weight = 0;
    REP(i,W+1) {
        if (value < dp[i]) {
            value = dp[i];
            weight = i;
        }
    }
    cout << value << endl << weight << endl;
}

int main() {
    int W;
    while (cin >> W, W) {
        solve42(W);
        caseId++;
    }
    return 0;
}