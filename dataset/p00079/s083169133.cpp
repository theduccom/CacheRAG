#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
#include <numeric>
#include <sstream>
#include <queue>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

typedef pair<double, double> xy;

double getAreaOfTriangle(xy a, xy b, xy c) {
    double ab = sqrt(pow(a.first-b.first,2) + pow(a.second-b.second,2));
    double bc = sqrt(pow(b.first-c.first,2) + pow(b.second-c.second,2));
    double ca = sqrt(pow(c.first-a.first,2) + pow(c.second-a.second,2));
    double z = (ab+bc+ca)/2;
    return sqrt(z*(z-ab)*(z-bc)*(z-ca));
}

double getAreaOfPolygon(vector<xy> v) {
    double area = 0;
    REP(i,v.size()-2) {
        area += getAreaOfTriangle(v[0], v[i+1], v[i+2]);
    }
    return area;
}

int main() {
    vector<xy> v;
    double x,y;
    char c;
    while(cin >> x >> c >> y) {
        v.push_back(make_pair(x,y));
    }
    double area = getAreaOfPolygon(v);
    printf("%.6f\n", area);
    return 0;
}