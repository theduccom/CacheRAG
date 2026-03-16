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


int main(void)
{
    double h,x;
    double answer[1000] = {0};
    int i,j,k,l = 0;
    
    while(cin >> x >> h ,x+h)
    {
        double trih = sqrt((x /2)*(x/2)+(h*h));
        //cout << trih << endl;
        double tris = ((trih)*x) /2;
        //cout << tris << endl;
        double answers = 4*tris+(x*x);
        //cout << answers << endl;
        answer[l] = answers;
        l++;
    }
    REP(i, l)
    printf("%f\n",answer[i]);
    return 0;
}