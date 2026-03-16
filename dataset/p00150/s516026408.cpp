#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    bool check[10005];
    rep(i,10001){
        check[i] = true;
    }
    check[0] = check[1] = false;
    rep(i,105){
        if(check[i]){
            for(int j = i * i; j < 10001; j += i){
                check[j] = false;
            }
        }
    }

    int n;
    while(cin >> n){
        for(int i = n; i >= 2; i--){
            if(check[i] && check[i - 2]){
                cout << i- 2 << ' ' << i << endl;
                break;
            }
        }
    }
}