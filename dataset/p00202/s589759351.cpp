#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cctype>

#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repi(i,l,n) for(int (i)=(int)(l);(i)<(int)(n);(i)++)
#define d_arr(arr, h, w) rep(i,(h) ){ cout << "["; rep(j,(w) ) { cout << (arr)[i][j] << ", "; } cout << "]" << endl;}
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x);

typedef pair<int ,int> P;

#define max_m 1000001
//prime table : if index is prime then return true
bool prime[max_m];
//if index can be made , return true:
bool dp[max_m];

void sieve(){
    rep(i,max_m){
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    repi(i,2,max_m){
        for(int j=2*i;j<max_m;j+=i){
            prime[j] = false;
        }
    }
}


int main()
{
    sieve();
    while(1){
        int n,x;
        cin >> n >> x;
        if( n == 0 && x == 0 ) { break; }
        int dish[n];
        rep(i,max_m){ dp[i] = false; }
        rep(i,n){
            cin >> dish[i];
            dp[dish[i]] = true;
        }

        //puts(" dp initiated ");
        rep(i,n){
            rep(j,x){
                if( dp[j] && j+dish[i] < max_m){
                    //cout << j + dish[i] << "," << endl;;
                    dp[j + dish[i]] = true;
                    //cout << j + dish[i] << "," << endl;;
                }
            }
        }
        //puts(" dp finisehd ");

        bool isna=true;
        for(int i=x; 0<=i; i--){
            if( dp[i] && prime[i] ) { 
                cout << i << endl;
                isna = false;
                break;
            }
        }
        if(isna){ cout << "NA" << endl; }
        

    }
}