#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

#define ll (long long)
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)


using namespace std;

int main (void){
  
    vector <double> h(500,0);
    int i = 0,j = 0,k = 0,l = 0;
    double max = 0;
    double min = 0;
    while(cin >> h[i++]);
    sort(h.begin(),h.end(),greater<double>());
    //cout << h[i-2] << endl;
    printf("%.1f\n",h[0]-h[i-2]);
    return 0;
}