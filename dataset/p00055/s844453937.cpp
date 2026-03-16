#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    double a;
    double ans;
    while(cin >> a){
        ans = a;
        range(i,2,11){
            if(i % 2 == 0){
                a *= 2;
            }else{
                a /= 3;
            }
            ans += a;
        }
        cout << setprecision(10) <<ans << endl;
    }
}