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
    int n,s;
    scanf("%d",&n);
    for (int i=0;i<n;++i) {
        scanf("%d",&s);
        int w1[10]={0};
        int w2[10]={0};
        for (int j=0;j<8;++j) {
            w1[s%10]+=1;
            w2[s%10]+=1;
            s/=10;
        }
        int x=0,y=0;
        int tmp1=10000000;
        for (int a=0;a<8;++a) {
            for (int b=9;b>=0;--b) {
                if (w1[b]>0) {
                    x+=(b*tmp1);
                    tmp1/=10;
                    w1[b]-=1;
                    break;
                }
            }
        }
        int tmp2=10000000;
        for (int a=0;a<8;++a) {
            for (int b=0;b<10;++b) {
                if (w2[b]>0) {
                    y+=(b*tmp2);
                    tmp2/=10;
                    w2[b]-=1;
                    break;
                }
            }
        }
        printf("%d\n",x-y);
    }
    return 0;
}