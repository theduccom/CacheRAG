#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;

int main(void){
    
    int leepyear[1000][745] = {0};
    int i,j=0,k = 0,l=0,m = 0,n= 0;
    int yearA,yearB;
    int checyear = 0;

    while(cin >> yearA >> yearB,yearA+yearB)
    {
        FOR(i, yearA, yearB+1)
        {
            checyear = i;
            if(checyear % 400 == 0)
            {
                leepyear[j][k] = checyear;
                k++;
                
            }else if((checyear % 4 == 0) && (checyear % 100 != 0))
            {
                leepyear[j][k] = checyear;
                k++;
            }
        }
        k = 0;
        j++;
    }
    REP(l, j)
    {
        n = 0;
        if(leepyear[l][0])
        {
            while (leepyear[l][n])
            {
                cout << leepyear[l][n] << endl;
                n++;
                
            }
            if( l != (j-1))
            cout << endl ;
        }
        else cout << "NA" << endl << endl;
    }
    
    return 0;
}