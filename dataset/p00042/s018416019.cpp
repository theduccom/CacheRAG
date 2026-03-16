#include <iostream>
using namespace std;

int main(){
    int W,N;
    int C = 0;
    while(cin >> W >> N && W){
        int dp[1010] = {};
        for(int i=0;i<N;i++){
            int a,b;
            char c;
            cin >> a >> c >> b;
            for(int j=W;j>=b;j--) dp[j] = max(dp[j], dp[j-b]+a);
        }
        int x = 0, y = 0;
        for(int i=0;i<=W;i++) if(x < dp[i]) x = dp[i], y = i;
        cout << "Case " << ++C << ":\n" << x << "\n" << y << "\n";
    }
}