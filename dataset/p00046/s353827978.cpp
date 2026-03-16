#include<bits/stdc++.h>
using namespace std;
int main(){
    double orz,mmin = 1e9,mmax = -1;
    while(~scanf("%lf",&orz)){
        mmax = max(mmax,orz);
        mmin = min(mmin,orz);
    }
    printf("%.1f\n",mmax-mmin);
    return 0;
}