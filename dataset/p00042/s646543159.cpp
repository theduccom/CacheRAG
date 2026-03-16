#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int dp[1001][1001];
int W, N;
int w[1000];
int v[1000];
int solve(){
    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            if(j < w[i]) dp[i+1][j] = dp[i][j];
            else dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]]+v[i]);
        }
    }
    return dp[N][W];
}
int main(){
    char comma;
    int count=0;
    while(cin >> W && W){
        count++;
        cin >> N;
        for(int i=0;i<N;i++){
            cin >> v[i] >> comma >> w[i];
        }
        for(int j=0;j<W;j++){
            dp[0][j] = 0;
        }
        cout << "Case " << count << ':' << endl;
        cout << solve() << endl;
        for(int j=W-1;j>=0;j--){
            if(dp[N][j] < dp[N][W]){
                cout << j+1 << endl;
                break;
            }
        }
    }
}