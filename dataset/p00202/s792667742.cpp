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
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n, x, ord[35];
    bool prime[1000000] = {1,1,0};

    rep(i,1000000){
        if(!prime[i]){
            for(int j = i + i; j < 1000000; j+=i){
                prime[j] = 1;
            }
        }
    }

    while(cin >> n >> x, n||x){
        bool total[1000000] = {1};
        rep(i,n){
            cin >> ord[i];
        }
        rep(i,x){
            if(total[i]){
                rep(j,n){
                    if(i + ord[j] > x) continue;
                    total[i + ord[j]] = 1;
                }
            }
        }
        bool c = true;
        for(int i = x; i >= 0; i--){
            if(prime[i] == 0 && total[i] == 1){
                cout << i << endl;
                c = false;
                break;
            }
        }
        if(c) cout << "NA" << endl;
    }
}