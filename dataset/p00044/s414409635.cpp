#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<cmath>
#include<complex>
using namespace std;

typedef complex<double> P;

#define X real()
#define Y imag()
typedef int kz;

kz gcd(kz a,kz b) { if(b==0) return a; else gcd(b,a%b); }

bool pr(int n) {
    int i=2;
    while (i*i<=n) {
        if (n%i==0) return false;
            i++;
    }
    return true;
}


int main(){
    int mod=1000000007;
    int n;
    while (scanf("%d",&n)!=EOF) {
        int ans[2]={0,0};
        for (int i=n-1;n>0;--i) {
            if (pr(i)) {
                ans[0]=i;
                break;
            }
        }
        for (int i=n+1;i<100000;++i) {
            if (pr(i)) {
                ans[1]=i;
                break;
            }
        }
        printf("%d %d\n",ans[0],ans[1]);
    }
    return 0;
}