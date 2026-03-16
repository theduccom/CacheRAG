#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<bitset>
#include<sstream>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int x;
    bool first;
    int i;
    int g;
    while(cin >> x){
        first = true;
        g = 1;
        int ans[10] = {0};
        for(i = 0; x > 1; i++){
            ans[i] = x % 2;
            x /= 2;
        }ans[i] = x;
        rep(j,10){
            if(ans[j] == 1 && first == true){
                cout << g;
                first = false;
            }else if(ans[j] == 1){
                cout << " " << g;
            }g *= 2;
        }cout << endl;
    }
}