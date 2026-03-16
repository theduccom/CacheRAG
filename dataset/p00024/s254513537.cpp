
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

#define ll (long lon
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;

int main (void){
    
    double min_v;
    while(cin >> min_v)
    {
        int i = 1;
        double h = (min_v / 9.8)*(min_v/9.8)*4.9;
        while((5*i-5)<= h)
            i++;
        cout << i << endl;
    }
    
    return 0;
}