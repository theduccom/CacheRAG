
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
    
    int number;
    while(cin >> number,number)
    {
        int math[11][11] ={0};
        REP(i,number)
        {
            REP(j,number)
            cin >> math[i][j];
        }
        REP(i,number)
            REP(j,number)
        math[i][number] += math[i][j];
        REP(i,number)
            REP(j,number)
        math[number][i] += math[j][i];
        REP(i,number)
        REP(j,number)
        math[number][number]+= math[i][j];
        REP(j, number+1)
        REP(i,number+1){
            printf("%5d",math[j][i]);
            if(i == number || (j == number && i == number))
                cout << endl;
                 }
    }
    return 0;
    
  
}