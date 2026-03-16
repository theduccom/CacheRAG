#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    double x,h;
    while(cin >> x >> h, h){
        cout << fixed  << setprecision(6);
        cout << sqrt(x * x / 4 + h * h) * x * 2 + x * x << endl;
    }
}