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
    bool prime[50100] = {true, true, false};
    int p[20000], j = 2;
    rep(i,50100){
        if(!prime[i]){
            p[j++] = i;
            for(int j = i + i; j < 50100; j+=i){
                prime[j] = true;
            }
        }
    }

    int n;
    while(cin >> n){
        int i = 2;
        while(true){
            if(p[i] < n && p[i + 1] > n){
                cout << p[i] << ' ' << p[i + 1] << endl;
                break;
            }else if(p[i] == n){
                cout << p[i - 1] << ' ' << p[i + 1] << endl;
                break;
            }else if(p[i + 1] == n){
                cout << p[i] << ' ' << p[i + 2] << endl;
                break;
            }
            i++;
        }
    }
}