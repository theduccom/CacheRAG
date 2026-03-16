#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdio>
#include <complex>

// http://www.prefield.com/algorithm/geometry/area2.html

using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i=(a); i<ll(b); i++)
#define rep(i,b) loop(i,0,b)

typedef vector<int> vi;

const double EPS = 1e-8;
const double INF = 1e12;
typedef complex<double> P;
namespace std {
    bool operator < (const P& a, const P& b) {
        return real(a) != real(b) ? real(a) < real(b) : imag(a) < imag(b);
    }
}
double cross(const P& a, const P& b) {
    return imag(conj(a)*b);
}
double dot(const P& a, const P& b) {
    return real(conj(a)*b);
}

#define next(P, i) P[(i-1+P.size())%P.size()]
#define curr(P, i) P[i]

typedef vector<P> polygon;
double area2(const polygon& P) {
    double A = 0;
    for (int i = 0; i < P.size(); ++i)
        A += cross(curr(P, i), next(P, i));
    return A;
}


int solve(string const& s){
    vi v(10);
    rep(i, 10) v[i] = s[i] - '0';
    while (v.size() != 1){
        vi w(v.size() - 1);
        rep(i, w.size()){
            w[i] = v[i] + v[i + 1];
            w[i] %= 10;
        }
        swap(v, w);
    }
    return v.front();
}

int main(){
    double x, y;
    polygon p;
    while (scanf("%lf,%lf", &x, &y) != EOF){
        p.emplace_back(x, y);
    }
    printf("%.100lf", abs(area2(p)) / 2);
}