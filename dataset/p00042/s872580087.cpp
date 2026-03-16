#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    int maxWeight, number;
    int C = 0;
    while(cin >> maxWeight >> number && maxWeight){
        int dp[1001] = {};
        rep(i,number){
            int a,b;
            char c;
            cin >> a >> c >> b;
            for(int j = maxWeight; j >= b; j--){
                dp[j] = max(dp[j], dp[j - b] + a);
                /*持てる重さの最大値から、入力された重さまでのループ
                 *入力した宝を持つべきか判断。
                 *持つ場合、持てる重さから宝の重さを引いて、
                 *　その添字の部分に宝の価値を入力する。
                 *　それがdp[j]にはいる。
                 *それを何度も繰り返す。
                 */
            }
        }
        int x = 0, y = 0;
        for(int i = 0; i <= maxWeight; i++){
            if(x < dp[i]){
                x = dp[i];
                y = i;
            }
        }
        cout << "Case " << ++C << ":\n" << x << "\n" << y << "\n";
    }
}