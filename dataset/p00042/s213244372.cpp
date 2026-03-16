
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
#define rep(i, j) for(int i = 0; i < j; i++)
#define f(i, k, j) for(int i = k; i < j; i++)
#define P pair<int, int>
const int INF = (1 << 26);
const int MAX_N = 1001;
const int MAX_W = 1001;

int w, n, dp[MAX_N][MAX_W];
vector<P> vec;

void solve();

int main(){
    int c = 1;
    while(cin >>w && w != 0){
        cin >>n;
        vec.clear();
        rep(i, n){
            int a, b;
            scanf("%d,%d", &a, &b);
            //first = 価値, second = 重さ
            vec.push_back( P(a, b) );
        }
        solve();
        int ans = -1, ansi = 0;
        rep(i, w + 1){
            if(dp[n][i] > ans){
                ans = dp[n][i];
                ansi = i;
            }
        }
        cout <<"Case " <<c <<":" <<endl;
        cout <<ans <<endl <<ansi <<endl;
        c++;
    }
    return 0;
}

void solve(){
    memset(dp, 0, sizeof(dp));
    rep(i, w) dp[0][i] = 0;

    rep(i, n){
        //cout <<"! " <<vec[i].first <<", " <<vec[i].second <<endl;
        rep(j, w + 1){
            if(j < vec[i].second) dp[i + 1][j] = dp[i][j];
            else dp[i + 1][j] = max(dp[i][j], dp[i][j - vec[i].second] + vec[i].first);
        }
        //rep(i, n){
        //    cout <<":";
        //    rep(j, w + 1){
        //        cout <<dp[i][j] <<", ";
        //    }
        //    cout <<endl;
        //}
    }
}