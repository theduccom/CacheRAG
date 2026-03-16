#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back

double a;

double f(int n) {
    if(n == 1) return a;
    if(n % 2 == 0)
        return f(n-1) * 2.0;
    else
        return f(n-1) / 3.0;
}

int main() {
    while(cin >> a) {
        double ans = 0;
        for(int i=1; i<=10; i++) ans += f(i);
        printf("%20lf\n", ans);
    }

    return 0;
}