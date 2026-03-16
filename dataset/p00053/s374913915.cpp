#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <bitset>

using namespace std;
typedef long long ll;



int main(){

    const ll N = 200000;
    bitset<N> sosu;
    int ans[10000];
    int cnt = 0;
    int sum = 0;
    
    sosu.set();
    
    for(ll i = 2;i < N; ++i){
        if(sosu.test(i)){
            sum += i;
            ans[cnt] = sum;
            ++cnt;
            if(cnt == 10000)break;
            for(ll j = i*i; j < N; j += i){
                sosu.reset(j);
            }
        }
    }
    
    ll n;
    while(1){
        cin >> n;
        if(!n)break;
        
        cout << ans[n-1] << endl;
    }
    
    return 0;
}