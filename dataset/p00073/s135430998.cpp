#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cmath>
#include<utility>
#include<string>

#define REP(n) for(int i = 0;i < n;i++)
#define LLREP(n) for(long long int  i = 0;i < n;i++)
typedef long long int ll;
using namespace std;
#define MAX_A 1000000007

int main(){

    double x,h;
    while(cin >> x >> h,x != 0){

        double bottom = x*x;
        double height = sqrt(pow(x/2,2.0)+pow(h,2.0));
        double ans = bottom + 4*x*height/2;
        printf("%.6f\n",ans);
    }

    return 0;
}
