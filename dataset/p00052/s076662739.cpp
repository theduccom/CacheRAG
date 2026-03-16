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
    long long input;
    while(cin >> input, input){
        int ans = 0;
        while(input / 5){
            ans += input / 5;
            input /= 5;
        }
        cout << ans << endl;
    }
}