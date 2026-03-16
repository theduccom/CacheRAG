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
    int a, b;
    bool n = false;
    while(cin >> a >> b, b){
        bool leap = true;
        range(i,a,b + 1){
            if(i == a && n) cout << endl;
            if(i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)){
                cout << i << endl;
                leap = false;
            }
            n = true;
        }
        if(leap)
            cout << "NA" << endl;
    }
}