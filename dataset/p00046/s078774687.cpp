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
    vector<double> n(1);
    int tmp=0;
    double s;
    while (scanf("%lf",&s)!=EOF){
        n.push_back(s);
        tmp++;
    }
    sort(n.begin(),n.end());
    printf("%lf\n",n[tmp]-n[1]);
    return 0;
}