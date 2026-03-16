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
    int primeNum[10100] = {0};
    rep(i,105000){
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    int j = 1;
    rep(i,105000){
        if(prime[i]){
            primeNum[j] = i;
            j++;
            for(int k = 2 * i; k < 105000; k+= i){
                prime[k] = false;
            }
        }
    }
    int ans[50001];
    range(i,1,50000){
        if(primeNum[i] > 50000) break;
        range(j,i,50000){
            if(primeNum[i] + primeNum[j] > 50000) break;
            ans[ primeNum[i] + primeNum[j] ]++;
        }
    }
    int input;
    while(cin >> input, input){
        cout << ans[input] << endl;
    }
}