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
    bool b[111111]={0};
    for (int i=2;i<111111;++i) {
        b[i]=pr(i);
    }
    int n;
    for (;;) {
        scanf("%d",&n);
        if (n==0) break;
        int ans=0,cnt=0;
        for (int i=2;cnt<n;++i) {
            if (b[i]) {
                ans+=i;
                cnt++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}