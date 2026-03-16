#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    int w, n;
    int count = 0;
    while(cin >> w, w){
        vector<pair<int, int> > v;
        long long dp[1010][1010];
        memset(dp, 0, sizeof(dp));
        cin >> n;
        for(int i=0; i < n; i++){int s, t; scanf("%d,%d", &s, &t); v.push_back(make_pair(s, t));}
        for(int i=n-1; 0 <= i; i--){
            for(int j=0; j <= w; j++){
                if(j < v[i].second) dp[i][j] = dp[i+1][j];
                else dp[i][j] = max(dp[i+1][j], dp[i+1][j-v[i].second]+v[i].first);
            }
        }
        cout << "Case " << ++count << ":" << endl;
        cout << dp[0][w] << endl;
        for(int i=w; ; i--){
            if(dp[0][i] != dp[0][w]){cout << i+1 << endl; break;}
        }
    }
}