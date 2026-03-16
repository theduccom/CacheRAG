#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>
#include <cstdlib>
#include <numeric>
#include <queue>
#include <complex>
#include <sstream>
#include <stack>

using namespace std;

#define reep(i, f, n) for (int i = f; i < n; ++i)
#define rep(i, n) reep(i, 0, n)


int main(){
    float x1,x2,x3,y1,y2,y3,gx,gy,G,Xc,Yc,r;
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
        gx = (x1+x2+x3)/3;
        gy = (y1+y2+y3)/3;
        G = ( y2*x1-y1*x2 +y3*x2-y2*x3 +y1*x3-y3*x1 );
        Xc = ((x1*x1+y1*y1)*(y2-y3)+(x2*x2+y2*y2)*(y3-y1)+(x3*x3+y3*y3)*(y1-y2))/(2*G);
        Yc = -((x1*x1+y1*y1)*(x2-x3)+(x2*x2+y2*y2)*(x3-x1)+(x3*x3+y3*y3)*(x1-x2))/(2*G);
        r = hypot(x1-Xc, y1-Yc);
        printf("%.3f %.3f %.3f\n", Xc, Yc, r);
    }
}
