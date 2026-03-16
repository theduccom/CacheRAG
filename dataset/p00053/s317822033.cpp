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
    bool prime[200000];
    int ans[10100] = {0};
    rep(i,105000){
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    int j = 1;
    rep(i,200000){
        if(prime[i]){
            ans[j] = ans[j - 1] + i;
            j++;
            for(int k = 2 * i; k < 105000; k+= i){
                prime[k] = false;
            }
        }
    }
    int n;
    while(cin >> n, n){
        cout << ans[n] << endl;
    }
}