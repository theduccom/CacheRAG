#include<iostream>
#include<algorithm>
using namespace std;
bool dp[1000120];
bool notPrime[1000120];
int main(){
    notPrime[0] = notPrime[1] = true;
    for(int i = 2;i*i < 1000010;i++){
        for(int j = 2 * i;j < 1000010;j+=i){
            notPrime[j] = true;
        }
    }
    int n,x;
    while(cin>>n>>x,n){
        dp[0] = true;
        while(n--){
            int a;
            cin>>a;
            for(int i = 0;i <= x;i++){
                if(dp[i]&&i+a <= 1000010)dp[i+a] = true;
            }
        }
        bool flg = false;
        for(int i = x;i >= 2;i--){
            if(!notPrime[i] & dp[i]){
                cout<<i<<endl;
                flg = true;
                break;
            }
        }
        if(!flg)cout<<"NA"<<endl;
        for(int i = 0;i < 1000020;i++)dp[i] = false;
    }
}