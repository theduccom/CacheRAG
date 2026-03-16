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
    int x,y,tmp=0;
    int ans[2]={0,0};
    while (scanf("%d,%d",&x,&y)!=EOF) {
        tmp++;
        ans[0]+=x*y;
        ans[1]+=y;
    }
    ans[1]=ans[1]*10/tmp;
    if (ans[1]%10>4) {
        ans[1]=ans[1]/10+1;
    } else {
        ans[1]/=10;
    }

    printf("%d\n%d\n",ans[0],ans[1]);
    return 0;
}