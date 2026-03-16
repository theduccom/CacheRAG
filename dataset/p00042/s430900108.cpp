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

int main(){
    int mod=1000000007;
    int w,n,a[1000],b[1000],Case=1;
    char s[260];
    for (;;) {
        scanf("%d",&w);
        if (w==0) break;
        int dp[w+1]={0};
        int ans[2]={0,0};
        scanf("%d",&n);
        for (int i=0;i<n;++i) {
            scanf("%d,%d",&a[i],&b[i]);
        }
        for (int i=0;i<n;++i) {
            for (int j=w-b[i];j>0;--j) {
                if (dp[j]!=0) {
                    dp[j+b[i]]=max(dp[j+b[i]],dp[j]+a[i]);
                }
            }
            dp[b[i]]=max(dp[b[i]],a[i]);
        }
        for (int i=0;i<w+1;++i) {
            if (ans[0]<dp[i]) {
                ans[0]=dp[i];
                ans[1]=i;
            }
        }
        printf("Case %d:\n%d\n%d\n",Case,ans[0],ans[1]);
        Case++;
    }
    return 0;
}