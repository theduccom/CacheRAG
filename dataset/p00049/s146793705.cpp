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
    int n;
    char s[2];
    int ans[4]={0};
    while (scanf("%d,%s",&n,s)!=EOF){
        if(!strcmp(s,"A")) {
            ans[0]++;
        } else if(!strcmp(s,"B")) {
            ans[1]++;
        } else if(!strcmp(s,"AB")) {
            ans[2]++;
        } else {
            ans[3]++;
        }
    }
    for (int i=0;i<4;++i) {
        printf("%d\n",ans[i]);
    }
    return 0;
}