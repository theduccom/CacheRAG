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
    int a,b,count;
    double ans,ave;
    char g;
    ans = ave = count = 0;
    while(cin >> a >> g >> b){
        count++;
        ans+= a * b;
        ave+= b;
    }
    ave /= count;
    cout << ans << endl << static_cast<int>(ave + 0.5) << endl;
}