#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    double m[1000];
    double high, low;
    int i = 0;

    while(cin >> m[i++]){
        ;
    }
    sort(m, m+i-1);
    high = m[i-2];
    low = m[0];
    cout << high - low << endl;
}