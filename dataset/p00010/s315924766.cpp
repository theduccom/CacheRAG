#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#include<cmath>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3;
    double a1, a2, b1, b2, c1, c2;
    double xans, yans, r;
    int n;

    cin >> n;
    rep(i,n){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        a1 = 2 * (x2 - x1);
        b1 = 2 * (y2 - y1);
        c1 = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;
        a2 = 2 * (x3 - x1);
        b2 = 2 * (y3 - y1);
        c2 = x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3;
        xans = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
        yans = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
        r = sqrt( (x1 - xans) * (x1 - xans) + (y1 - yans) * (y1 - yans) );
        cout << fixed;
        cout << setprecision(3) << xans << " " << yans << " " << r << endl;
    }
}