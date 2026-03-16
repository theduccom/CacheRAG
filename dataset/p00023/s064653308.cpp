#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;
typedef pair<P, double> C;
#define X real()
#define Y imag()
#define EPS (1e-10)

// ??? c1 ??¨??? c2 ???????????¢???
int intersectCC(C c1, C c2){
    P c1p = c1.first, c2p = c2.first;
    double c1r = c1.second, c2r = c2.second;
    long double d = abs(c1p - c2p), r1 = c1r, r2 = c2r;
    if(r1 + r2 < d)            return  0; // ??¢????????????
    if(abs(r1 + r2 - d) < EPS) return +1; // ?????\
    if(d + r1 < r2)            return -2; // c1 ??? c2 ??????
    if(d + r2 < r1)            return +2; // c2 ??? c1 ??????
    return +1; // 2?????????????????????
}

int main() {
    C a,b;
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a.first.X >> a.first.Y >> a.second;
        cin >> b.first.X >> b.first.Y >> b.second;

        cout << intersectCC(a,b) << endl;
    }
    return 0;
}