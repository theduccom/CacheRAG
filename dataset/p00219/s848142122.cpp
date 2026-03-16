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
    int n, inp;
    while(cin >> n,n){
    int ice[15] = {0};
    rep(i,n){
        cin >> inp;
        ice[inp]++;
    }
    rep(i,10){
        if(ice[i] == 0){
            cout << '-';
        }else{
            rep(j, ice[i]){
                cout << '*';
            }
        }
        cout << endl;
    }
    }
}